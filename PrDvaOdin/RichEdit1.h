#pragma once


// ���������� ���� RichEdit1

class RichEdit1 : public CDialogEx
{
	DECLARE_DYNAMIC(RichEdit1)

public:
	RichEdit1(CWnd* pParent = NULL);   // ����������� �����������
	virtual ~RichEdit1();

// ������ ����������� ����
	enum { IDD = IDD_PRDVAODIN_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // ��������� DDX/DDV

	DECLARE_MESSAGE_MAP()
};
