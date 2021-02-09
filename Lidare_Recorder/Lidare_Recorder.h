
// Lidare_Recorder.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CLidareRecorderApp:
// See Lidare_Recorder.cpp for the implementation of this class
//

class CLidareRecorderApp : public CWinApp
{
public:
	CLidareRecorderApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CLidareRecorderApp theApp;
