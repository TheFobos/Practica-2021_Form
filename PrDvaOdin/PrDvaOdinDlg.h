
// PrDvaOdinDlg.h : файл заголовка
//

#pragma once
#include "afxcmn.h"


// диалоговое окно CPrDvaOdinDlg
class CPrDvaOdinDlg : public CDialogEx
{
// Создание
public:
	CPrDvaOdinDlg(CWnd* pParent = NULL);	// стандартный конструктор

// Данные диалогового окна
	enum { IDD = IDD_PRDVAODIN_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeRichedit21();
	CRichEditCtrl m_inn;
	CString m_innv;
	CRichEditCtrl m_corr;
	CString m_corrv;
	CRichEditCtrl m_nalper;
	CString m_nalperv;
	CRichEditCtrl m_kodkatnal;
	CString m_kodkatnalv;
	CRichEditCtrl m_predvnalorgkod;
	CString m_predvnalorgkodv;
	CRichEditCtrl m_kodoktmo;
	CString m_kodoktmov;
	afx_msg void OnEnChangeRichedit26();
	CRichEditCtrl m_fam;
	CString m_famv;
	CRichEditCtrl m_imya;
	CString m_imyav;
	CRichEditCtrl m_otch;
	CString m_otchv;
	CRichEditCtrl m_telef;
	CString m_telefv;
	CRichEditCtrl m_sumpreddoh;
	CString m_sumpreddohv;
	CRichEditCtrl m_listov;
	CString m_listovv;
	CRichEditCtrl m_nalplatprednalplat;
	CString m_nalplatprednalplatv;
	CRichEditCtrl m_fampred;
	CString m_fampredv;
	CRichEditCtrl m_imyapred;
	CString m_imyapredv;
	CRichEditCtrl m_otchpred;
	CString m_otchpredv;
	CRichEditCtrl m_orgpred;
	CString m_orgpredv;
	CRichEditCtrl m_dataden;
	CString m_datadenv;
	CRichEditCtrl m_datames;
	CString m_datamesv;
	CRichEditCtrl m_datagod;
	CString m_datagodv;
	CRichEditCtrl m_deklprkod;
	CString m_deklprkodv;
	CRichEditCtrl m_listov2;
	CString m_listov2v;
	CRichEditCtrl m_dataden2;
	CString m_dataden2v;
	CRichEditCtrl m_datames2;
	CString m_datames2v;
	CRichEditCtrl m_datagod2;
	CString m_datagod2v;
	CRichEditCtrl m_zaregzan;
	CString m_zaregzanv;
	afx_msg void OnEnChangeRichedit41();
	CRichEditCtrl m_dokpolnpred;
	CString m_dokpolnpredv;
	afx_msg void OnBnClickedOk();
	afx_msg void On32775();
	afx_msg void On32780();
	afx_msg void On32783();
	afx_msg void OnMenu32784();
	afx_msg void On32785();
	afx_msg void On32772();
	afx_msg void On32786();
};
