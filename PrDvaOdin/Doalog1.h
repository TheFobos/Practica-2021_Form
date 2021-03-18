#pragma once
#include "msflexgrid1.h"


// диалоговое окно Doalog1

class Doalog1 : public CDialogEx
{
	DECLARE_DYNAMIC(Doalog1)

public:
	Doalog1(CWnd* pParent = NULL);   // стандартный конструктор
	virtual ~Doalog1();

// Данные диалогового окна
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnIddDialog1();
	CMsflexgrid1 m_Grid;
	afx_msg void OnBnClickedButton1();
	char * Doalog1::FormatFileName(char * input);

	char * Doalog1::StrToChar(CString input);

	virtual BOOL OnInitDialog();
	afx_msg void On32787();
//	CString m_poisk;
	afx_msg void On32788();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	CString m_poisk;
};
