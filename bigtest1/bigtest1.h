#pragma once

#include<afxwin.h>

class CTestWnd :public CFrameWnd
{
	DECLARE_MESSAGE_MAP()
public:
	LRESULT OnPaint(WPARAM wParam, LPARAM lParam);
	LRESULT OnTimer(WPARAM wParam, LPARAM lParam);
	LRESULT OnLButtonDown(WPARAM wParam, LPARAM lParam);
	short m_shortTime;
};

class CTestApp :public CWinApp
{
public:
	BOOL InitInstance();
};

CTestApp theApp;