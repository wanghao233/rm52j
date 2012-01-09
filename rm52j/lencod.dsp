# Microsoft Developer Studio Project File - Name="lencod" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=lencod - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "lencod.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "lencod.mak" CFG="lencod - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "lencod - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "lencod - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "lencod - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "lencod/Release"
# PROP Intermediate_Dir "lencod/Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /Zd /O2 /Ob2 /I "lencod\inc" /I "lcommon\inc" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /FR /YX /FD /c
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /map /debug /machine:I386 /out:"bin/lencod.exe" /mapinfo:lines
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "lencod - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "lencod/Debug"
# PROP Intermediate_Dir "lencod/Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /GX /Zi /Od /Ob1 /I "lencod/inc" /I "lcommon/inc" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /FR /YX /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /profile /debug /machine:I386 /out:"bin/lencod.exe"

!ENDIF 

# Begin Target

# Name "lencod - Win32 Release"
# Name "lencod - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\lencod\src\bitstream.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\block.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\block_const.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\configfile.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\fast_me.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\golomb.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\header.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\image.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\lencod.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\loopfilter.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\macroblock.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\mbuffer.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\memalloc.c
# End Source File
# Begin Source File

SOURCE=".\lencod\src\mv-search.c"
# End Source File
# Begin Source File

SOURCE=.\lencod\src\ratectl.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\rdopt.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\rdopt_coding_state.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\refbuf.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\slice.c
# End Source File
# Begin Source File

SOURCE=.\lencod\src\vlc.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\lencod\inc\bitstream.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\block.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\configfile.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\contributors.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\defines.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\fast_me.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\global.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\golomb.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\header.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\image.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\loopfilter.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\macroblock.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\mbuffer.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\memalloc.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\minmax.h
# End Source File
# Begin Source File

SOURCE=".\lencod\inc\mv-search.h"
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\ratectl.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\rdopt_coding_state.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\refbuf.h
# End Source File
# Begin Source File

SOURCE=.\lencod\inc\vlc.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\bin\encoder.cfg
# End Source File
# End Target
# End Project
