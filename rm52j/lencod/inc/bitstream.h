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
* File name:
* Function:
*
*************************************************************************************
*/

#ifndef _BIT_STREAM_H
#define _BIT_STREAM_H

#include <stdio.h>

#define SVA_START_CODE_EMULATION

#ifdef SVA_START_CODE_EMULATION

#define SVA_STREAM_BUF_SIZE 1024 //must large than 3
typedef struct {
    FILE *f;
    unsigned char  buf[SVA_STREAM_BUF_SIZE];  //��������
    unsigned int  uPreBytes;//���д���3���ֽڣ���ʼֵ��0xFFFFFFFF
    int  iBytePosition;    //��ǰ�ֽ�λ��
    int  iBitOffset;      //��ǰλƫ�ƣ�0��ʾ���λ
    int  iNumOfStuffBits;  //�Ѳ�������λ�ĸ�����������ʼ��ʱ��0
    int iBitsCount;      //������λ��
} OutputStream;
int write_start_code(OutputStream *p,unsigned char code);
extern OutputStream *pORABS;
#endif

void CloseBitStreamFile();
void OpenBitStreamFile(char *Filename);
int  WriteVideoEditCode();
int  WriteSequenceHeader();
int  WriteSequenceDisplayExtension();
int  WriteUserData(char *userdata);
int  WriteSequenceEnd();
void WriteBitstreamtoFile();
int WriteCopyrightExtension();
int WriteCameraParametersExtension();
int WriteSliceHeader(int slice_nr, int slice_qp);
#endif
