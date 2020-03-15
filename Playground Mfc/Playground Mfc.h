
// Playground Mfc.h : main header file for the Playground Mfc application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CPlaygroundMfcApp:
// See Playground Mfc.cpp for the implementation of this class
//

class CPlaygroundMfcApp : public CWinApp
{
public:
	CPlaygroundMfcApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CPlaygroundMfcApp theApp;
