/*
*****************************************************************************
* COPYRIGHT AND WARRANTY INFORMATION
*
* Copyright 2003, Advanced Audio Video Coding Standard, Part II
*
* DISCLAIMER OF WARRANTY
*
* The contents of this file are subject to the Mozilla Public License
* Version 1.1 (the "License"); you may not use this file except in
* compliance with the License. You may obtain a copy of the License at
* http://www.mozilla.org/MPL/
*
* Software distributed under the License is distributed on an "AS IS"
* basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
* License for the specific language governing rights and limitations under
* the License.
*                     
* THIS IS NOT A GRANT OF PATENT RIGHTS - SEE THE AVS PATENT POLICY.
* The AVS Working Group doesn't represent or warrant that the programs
* furnished here under are free of infringement of any third-party patents.
* Commercial implementations of AVS, including shareware, may be
* subject to royalty fees to patent holders. Information regarding
* the AVS patent policy for standardization procedure is available at 
* AVS Web site http://www.avs.org.cn. Patent Licensing is outside
* of AVS Working Group.
*
* The Original Code is Reference Software for China National Standard 
* GB/T 20090.2-2006 (short for AVS-P2 or AVS Video) at version RM52J.
*
* The Initial Developer of the Original Code is Video subgroup of AVS
* Workinggroup (Audio and Video coding Standard Working Group of China).
* Contributors:   Guoping Li,    Siwei Ma,    Jian Lou,    Qiang Wang , 
*   Jianwen Chen,Haiwu Zhao,  Xiaozhen Zheng, Junhao Zheng, Zhiming Wang
* 
******************************************************************************
*/



/*
*************************************************************************************
* File name: memalloc.c
* Function: Memory allocation and free helper funtions
*
*************************************************************************************
*/



#include <stdlib.h>
#include "memalloc.h"

/*
*************************************************************************
* Function:Allocate 2D memory array -> unsigned char array2D[rows][columns]
* Input:
* Output:memory size in bytes
* Return: 
* Attention:
*************************************************************************
*/

int get_mem2D(byte ***array2D, int rows, int columns)
{
    int i;

    if((*array2D      = (byte**)calloc(rows,        sizeof(byte*))) == NULL)
        no_mem_exit("get_mem2D: array2D");

    if(((*array2D)[0] = (byte* )calloc(columns*rows,sizeof(byte ))) == NULL)
        no_mem_exit("get_mem2D: array2D");

    for(i=1;i<rows;i++)
        (*array2D)[i] = (*array2D)[i-1] + columns ;

    return rows*columns;
}

/*
*************************************************************************
* Function:Allocate 2D memory array -> int array2D[rows][columns]
* Input:
* Output:memory size in bytes
* Return: 
* Attention:
*************************************************************************
*/

int get_mem2Dint(int ***array2D, int rows, int columns)
{
    int i;

    if((*array2D      = (int**)calloc(rows,        sizeof(int*))) == NULL)
        no_mem_exit("get_mem2Dint: array2D");
    if(((*array2D)[0] = (int* )calloc(rows*columns,sizeof(int ))) == NULL)
        no_mem_exit("get_mem2Dint: array2D");

    for(i=1 ; i<rows ; i++)
        (*array2D)[i] =  (*array2D)[i-1] + columns  ;

    return rows*columns*sizeof(int);
}
/*
*************************************************************************
* Function:Allocate 3D memory array -> unsigned char array3D[frames][rows][columns]
* Input:
* Output:memory size in bytes
* Return: 
* Attention:
*************************************************************************
*/

int get_mem3D(byte ****array3D, int frames, int rows, int columns)
{
    int  j;

    if(((*array3D) = (byte***)calloc(frames,sizeof(byte**))) == NULL)
        no_mem_exit("get_mem3D: array3D");

    for(j=0;j<frames;j++)
        get_mem2D( (*array3D)+j, rows, columns ) ;

    return frames*rows*columns;
}

/*
*************************************************************************
* Function:Allocate 3D memory array -> int array3D[frames][rows][columns]
* Input:
* Output:memory size in bytes
* Return: 
* Attention:
*************************************************************************
*/

int get_mem3Dint(int ****array3D, int frames, int rows, int columns)
{
    int  j;

    if(((*array3D) = (int***)calloc(frames,sizeof(int**))) == NULL)
        no_mem_exit("get_mem3Dint: array3D");

    for(j=0;j<frames;j++)
        get_mem2Dint( (*array3D)+j, rows, columns ) ;

    return frames*rows*columns*sizeof(int);
}

/*
*************************************************************************
* Function:Allocate 4D memory array -> int array3D[frames][rows][columns][component]
* Input:
* Output:memory size in bytes
* Return: 
* Attention:
*************************************************************************
*/

int get_mem4Dint(int *****array4D, int idx, int frames, int rows, int columns )
{
    int  j;

    if(((*array4D) = (int****)calloc(idx,sizeof(int**))) == NULL)
        no_mem_exit("get_mem4Dint: array4D");

    for(j=0;j<idx;j++)
        get_mem3Dint( (*array4D)+j, frames, rows, columns ) ;

    return idx*frames*rows*columns*sizeof(int);
}

/*
*************************************************************************
* Function:free 2D memory array which was alocated with get_mem2D()
* Input:
* Output:
* Return: 
* Attention:
*************************************************************************
*/

void free_mem2D(byte **array2D)
{
    if (array2D)
    {
        if (array2D[0])
            free (array2D[0]);
        else
            error ("free_mem2D: trying to free unused memory",100);

        free (array2D);
    } 
    else
    {
        error ("free_mem2D: trying to free unused memory",100);
    }

}

/*
*************************************************************************
* Function:free 2D memory array
which was alocated with get_mem2Dint()
* Input:
* Output:
* Return: 
* Attention:
*************************************************************************
*/


void free_mem2Dint(int **array2D)
{
    if (array2D)
    {
        if (array2D[0]) 
            free (array2D[0]);
        else
            error ("free_mem2D: trying to free unused memory",100);

        free (array2D);

    }
    else
    {
        error ("free_mem2D: trying to free unused memory",100);
    }

}
/*
*************************************************************************
* Function:free 3D memory array
which was alocated with get_mem3D()
* Input:
* Output:
* Return: 
* Attention:
*************************************************************************
*/

void free_mem3D(byte ***array3D, int frames)
{
    int i;

    if (array3D)
    {
        for (i=0;i<frames;i++)
        { 
            free_mem2D(array3D[i]);
        }
        free (array3D);
    } 
    else
    {
        error ("free_mem3D: trying to free unused memory",100);
    }
}

/*
*************************************************************************
* Function:free 3D memory array 
which was alocated with get_mem3Dint()
* Input:
* Output:
* Return: 
* Attention:
*************************************************************************
*/

void free_mem3Dint(int ***array3D, int frames)
{
    int i;

    if (array3D)
    {
        for (i=0;i<frames;i++)
        { 
            free_mem2Dint(array3D[i]);
        }
        free (array3D);
    } 
    else
    {
        error ("free_mem3D: trying to free unused memory",100);
    }
}

/*
*************************************************************************
* Function:free 4D memory array 
which was alocated with get_mem4Dint()
* Input:
* Output:
* Return: 
* Attention:
*************************************************************************
*/

void free_mem4Dint(int ****array4D, int idx, int frames )
{
    int  j;

    if (array4D)
    {
        for(j=0;j<idx;j++)
            free_mem3Dint( array4D[j], frames) ;
        free (array4D);
    }
    else
    {
        error ("free_mem4D: trying to free unused memory",100);
    }

}
/*
*************************************************************************
* Function:Exit program if memory allocation failed (using error())
* Input: where
string indicating which memory allocation failed
* Output:
* Return: 
* Attention:
*************************************************************************
*/

void no_mem_exit(char *where)
{
    snprintf(errortext, ET_SIZE, "Could not allocate memory: %s",where);
    error (errortext, 100);
}

