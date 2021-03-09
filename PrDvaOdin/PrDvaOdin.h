
// PrDvaOdin.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CPrDvaOdinApp:
// О реализации данного класса см. PrDvaOdin.cpp
//

class CPrDvaOdinApp : public CWinApp
{
public:
	CPrDvaOdinApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CPrDvaOdinApp theApp;