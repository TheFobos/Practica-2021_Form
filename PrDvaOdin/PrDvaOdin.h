
// PrDvaOdin.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CPrDvaOdinApp:
// � ���������� ������� ������ ��. PrDvaOdin.cpp
//

class CPrDvaOdinApp : public CWinApp
{
public:
	CPrDvaOdinApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CPrDvaOdinApp theApp;