//+------------------------------------------------------------------+
//|                                  MetaTrader 4 Manager API Sample |
//|                   Copyright 2001-2012, MetaQuotes Software Corp. |
//|                                        http://www.metaquotes.net |
//+------------------------------------------------------------------+
#pragma once

#define WINVER         0x0501
#define _WIN32_IE      0x0600
#define VC_EXTRALEAN      // Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdtctl.h>      // MFC support for Internet Explorer 4 Common Controls

#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>         // MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxsock.h>      // MFC socket extensions

#include <math.h>

//--- macros
#define TERMINATE_STR(str)   str[sizeof(str)-1]=0;
#define COPY_STR(dst,src)  { strncpy(dst,src,sizeof(dst)-1); dst[sizeof(dst)-1]=0; }

//{{AFX_INSERT_LOCATION}}
//+------------------------------------------------------------------+
