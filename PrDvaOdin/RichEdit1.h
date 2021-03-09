#pragma once


// диалоговое окно RichEdit1

class RichEdit1 : public CDialogEx
{
	DECLARE_DYNAMIC(RichEdit1)

public:
	RichEdit1(CWnd* pParent = NULL);   // стандартный конструктор
	virtual ~RichEdit1();

// Данные диалогового окна
	enum { IDD = IDD_PRDVAODIN_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
