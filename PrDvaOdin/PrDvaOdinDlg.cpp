
// PrDvaOdinDlg.cpp : файл реализации
//

#include "stdafx.h"
#include "PrDvaOdin.h"
#include "PrDvaOdinDlg.h"
#include "afxdialogex.h"
#include "CrFile.h"
#include <ctime>


#ifdef _DEBUG
#define new DEBUG_NEW
#endif



// Диалоговое окно CAboutDlg используется для описания сведений о приложении

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Данные диалогового окна
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

// Реализация
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// диалоговое окно CPrDvaOdinDlg



CPrDvaOdinDlg::CPrDvaOdinDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CPrDvaOdinDlg::IDD, pParent)
	, m_innv(_T(""))
	, m_corrv(_T(""))
	, m_nalperv(_T(""))
	, m_kodkatnalv(_T(""))
	, m_predvnalorgkodv(_T(""))
	, m_kodoktmov(_T(""))
	, m_famv(_T(""))
	, m_imyav(_T(""))
	, m_otchv(_T(""))
	, m_telefv(_T(""))
	, m_sumpreddohv(_T(""))
	, m_listovv(_T(""))
	, m_nalplatprednalplatv(_T(""))
	, m_fampredv(_T(""))
	, m_imyapredv(_T(""))
	, m_otchpredv(_T(""))
	, m_orgpredv(_T(""))
	, m_datadenv(_T(""))
	, m_datamesv(_T(""))
	, m_datagodv(_T(""))
	, m_deklprkodv(_T(""))
	, m_listov2v(_T(""))
	, m_dataden2v(_T(""))
	, m_datames2v(_T(""))
	, m_datagod2v(_T(""))
	, m_zaregzanv(_T(""))
	, m_dokpolnpredv(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPrDvaOdinDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, IDC_RICHEDIT21, m_inn);
	//  DDX_Text(pDX, IDC_RICHEDIT22, m_nomcorr);
	//  DDX_Control(pDX, IDC_RICHEDIT21, m_inn);
	DDX_Control(pDX, IDC_RICHEDIT21, m_inn);
	DDX_Text(pDX, IDC_RICHEDIT21, m_innv);
	DDX_Control(pDX, IDC_RICHEDIT22, m_corr);
	DDX_Text(pDX, IDC_RICHEDIT22, m_corrv);
	DDX_Control(pDX, IDC_RICHEDIT23, m_nalper);
	DDX_Text(pDX, IDC_RICHEDIT23, m_nalperv);
	DDX_Control(pDX, IDC_RICHEDIT24, m_kodkatnal);
	DDX_Text(pDX, IDC_RICHEDIT24, m_kodkatnalv);
	DDX_Control(pDX, IDC_RICHEDIT25, m_predvnalorgkod);
	DDX_Text(pDX, IDC_RICHEDIT25, m_predvnalorgkodv);
	DDX_Control(pDX, IDC_RICHEDIT26, m_kodoktmo);
	DDX_Text(pDX, IDC_RICHEDIT26, m_kodoktmov);
	DDX_Control(pDX, IDC_RICHEDIT27, m_fam);
	DDX_Text(pDX, IDC_RICHEDIT27, m_famv);
	DDX_Control(pDX, IDC_RICHEDIT28, m_imya);
	DDX_Text(pDX, IDC_RICHEDIT28, m_imyav);
	//  DDX_Control(pDX, IDC_RICHEDIT29, m_otchv);
	DDX_Control(pDX, IDC_RICHEDIT29, m_otch);
	DDX_Text(pDX, IDC_RICHEDIT29, m_otchv);
	DDX_Control(pDX, IDC_RICHEDIT30, m_telef);
	DDX_Text(pDX, IDC_RICHEDIT30, m_telefv);
	DDX_Control(pDX, IDC_RICHEDIT31, m_sumpreddoh);
	DDX_Text(pDX, IDC_RICHEDIT31, m_sumpreddohv);
	DDX_Control(pDX, IDC_RICHEDIT32, m_listov);
	DDX_Text(pDX, IDC_RICHEDIT32, m_listovv);
	DDX_Control(pDX, IDC_RICHEDIT33, m_nalplatprednalplat);
	DDX_Text(pDX, IDC_RICHEDIT33, m_nalplatprednalplatv);
	DDX_Control(pDX, IDC_RICHEDIT34, m_fampred);
	DDX_Text(pDX, IDC_RICHEDIT34, m_fampredv);
	DDX_Control(pDX, IDC_RICHEDIT35, m_imyapred);
	DDX_Text(pDX, IDC_RICHEDIT35, m_imyapredv);
	DDX_Control(pDX, IDC_RICHEDIT36, m_otchpred);
	DDX_Text(pDX, IDC_RICHEDIT36, m_otchpredv);
	DDX_Control(pDX, IDC_RICHEDIT37, m_orgpred);
	DDX_Text(pDX, IDC_RICHEDIT37, m_orgpredv);
	DDX_Control(pDX, IDC_RICHEDIT38, m_dataden);
	DDX_Text(pDX, IDC_RICHEDIT38, m_datadenv);
	DDX_Control(pDX, IDC_RICHEDIT39, m_datames);
	DDX_Text(pDX, IDC_RICHEDIT39, m_datamesv);
	DDX_Control(pDX, IDC_RICHEDIT40, m_datagod);
	DDX_Text(pDX, IDC_RICHEDIT40, m_datagodv);
	DDX_Control(pDX, IDC_RICHEDIT42, m_deklprkod);
	DDX_Text(pDX, IDC_RICHEDIT42, m_deklprkodv);
	DDX_Control(pDX, IDC_RICHEDIT43, m_listov2);
	DDX_Text(pDX, IDC_RICHEDIT43, m_listov2v);
	DDX_Control(pDX, IDC_RICHEDIT44, m_dataden2);
	DDX_Text(pDX, IDC_RICHEDIT44, m_dataden2v);
	DDX_Control(pDX, IDC_RICHEDIT45, m_datames2);
	DDX_Text(pDX, IDC_RICHEDIT45, m_datames2v);
	DDX_Control(pDX, IDC_RICHEDIT46, m_datagod2);
	DDX_Text(pDX, IDC_RICHEDIT46, m_datagod2v);
	DDX_Control(pDX, IDC_RICHEDIT47, m_zaregzan);
	DDX_Text(pDX, IDC_RICHEDIT47, m_zaregzanv);
	DDX_Control(pDX, IDC_RICHEDIT41, m_dokpolnpred);
	DDX_Text(pDX, IDC_RICHEDIT41, m_dokpolnpredv);
}

BEGIN_MESSAGE_MAP(CPrDvaOdinDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_RICHEDIT21, &CPrDvaOdinDlg::OnEnChangeRichedit21)
	ON_EN_CHANGE(IDC_RICHEDIT26, &CPrDvaOdinDlg::OnEnChangeRichedit26)
	ON_EN_CHANGE(IDC_RICHEDIT41, &CPrDvaOdinDlg::OnEnChangeRichedit41)
	ON_BN_CLICKED(IDOK, &CPrDvaOdinDlg::OnBnClickedOk)
	ON_COMMAND(ID_32775, &CPrDvaOdinDlg::On32775)
	ON_COMMAND(ID_32780, &CPrDvaOdinDlg::On32780)
	ON_COMMAND(ID_32783, &CPrDvaOdinDlg::On32783)
	ON_COMMAND(ID_Menu32784, &CPrDvaOdinDlg::OnMenu32784)
	ON_COMMAND(ID_32785, &CPrDvaOdinDlg::On32785)
	ON_COMMAND(ID_32772, &CPrDvaOdinDlg::On32772)
END_MESSAGE_MAP()


// обработчики сообщений CPrDvaOdinDlg

BOOL CPrDvaOdinDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Добавление пункта "О программе..." в системное меню.

	// IDM_ABOUTBOX должен быть в пределах системной команды.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	this->SetBackgroundImage(IDB_BITMAP1, BACKGR_TOPLEFT, TRUE);
	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Задает значок для этого диалогового окна.  Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок

	// TODO: добавьте дополнительную инициализацию
	CFont font;
	font.CreateFont(
		18,                        // nHeight
		0,                          // nWidth
		0,                         // nEscapement
		0,                         // nOrientation
		FW_REGULAR,                 // nWeight
		FALSE,                     // bItalic
		FALSE,                     // bUnderline
		0,                         // cStrikeOut
		ANSI_CHARSET,              // nCharSet
		OUT_DEFAULT_PRECIS,        // nOutPrecision
		CLIP_DEFAULT_PRECIS,       // nClipPrecision
		DEFAULT_QUALITY,           // nQuality
		DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
		L"Arial");
	
	UpdateData();

	m_inn.SetFont(&font, true);
	m_corr.SetFont(&font, true);
	m_nalper.SetFont(&font, true);
	m_kodkatnal.SetFont(&font, true);
	m_predvnalorgkod.SetFont(&font, true);
	m_kodoktmo.SetFont(&font, true);
	m_fam.SetFont(&font, true);
	m_imya.SetFont(&font, true);
	m_otch.SetFont(&font, true);
	m_telef.SetFont(&font, true);
	m_sumpreddoh.SetFont(&font, true);
	m_listov.SetFont(&font, true);
	m_listov2.SetFont(&font, true);
	m_nalplatprednalplat.SetFont(&font, true);
	m_fampred.SetFont(&font, true);
	m_imyapred.SetFont(&font, true);
	m_otchpred.SetFont(&font, true);
	m_orgpred.SetFont(&font, true);
	m_dataden.SetFont(&font, true);
	m_datames.SetFont(&font, true);
	m_datagod.SetFont(&font, true);
	m_dataden2.SetFont(&font, true);
	m_datames2.SetFont(&font, true);
	m_datagod2.SetFont(&font, true);
	m_dokpolnpred.SetFont(&font, true);
	m_deklprkod.SetFont(&font, true);
	m_zaregzan.SetFont(&font, true);

	//Получение данных

	time_t rawtime;
	struct tm timeinfo;
	char buffer[80];

	time(&rawtime);
	localtime_s(&timeinfo, &rawtime);
	
	strftime(buffer, 80, "%d", &timeinfo);
	m_datadenv = buffer;
	m_dataden2v = buffer;
	
	strftime(buffer, 80, "%m", &timeinfo);
	m_datamesv = buffer;
	m_datames2v = buffer;

	strftime(buffer, 80, "%Y", &timeinfo);
	m_datagodv = buffer;
	m_datagod2v = buffer;
	

	font.DeleteObject();

	UpdateData(false);

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

void CPrDvaOdinDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CPrDvaOdinDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);

	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CPrDvaOdinDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CPrDvaOdinDlg::OnEnChangeRichedit21()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CPrDvaOdinDlg::OnEnChangeRichedit26()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CPrDvaOdinDlg::OnEnChangeRichedit41()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CPrDvaOdinDlg::OnBnClickedOk()
{
	UpdateData();
	CrFile sendvars;
	sendvars.OutputFile(&m_innv, &m_corrv, &m_nalperv, &m_kodkatnalv, &m_predvnalorgkodv, &m_kodoktmov, &m_famv, &m_imyav, &m_otchv, &m_telefv, &m_sumpreddohv, &m_listovv, &m_nalplatprednalplatv, &m_fampredv, &m_imyapredv, &m_otchpredv, &m_orgpredv, &m_datadenv, &m_datamesv, &m_datagodv, &m_dokpolnpredv, &m_deklprkodv, &m_zaregzanv);
	UpdateData(false);
}


void CPrDvaOdinDlg::On32775()
{
	UpdateData();
	CrFile sendvars;
	sendvars.OutputFile(&m_innv, &m_corrv, &m_nalperv, &m_kodkatnalv, &m_predvnalorgkodv, &m_kodoktmov, &m_famv, &m_imyav, &m_otchv, &m_telefv, &m_sumpreddohv, &m_listovv, &m_nalplatprednalplatv, &m_fampredv, &m_imyapredv, &m_otchpredv, &m_orgpredv, &m_datadenv, &m_datamesv, &m_datagodv, &m_dokpolnpredv, &m_deklprkodv, &m_zaregzanv);
	UpdateData(false);
}



void CPrDvaOdinDlg::On32780()
{

	UpdateData();

	CrFile getvars;

	getvars.InputFile(&m_innv, &m_corrv, &m_nalperv, &m_kodkatnalv, &m_predvnalorgkodv, &m_kodoktmov, &m_famv, &m_imyav, &m_otchv, &m_telefv, &m_sumpreddohv, &m_listovv, &m_nalplatprednalplatv, &m_fampredv, &m_imyapredv, &m_otchpredv, &m_orgpredv, &m_datadenv, &m_datamesv, &m_datagodv, &m_dokpolnpredv, &m_deklprkodv, &m_zaregzanv);

	m_listov2v = m_listovv;

	UpdateData(false);

}


void CPrDvaOdinDlg::On32783()
{
	

	CDC* WindowToCaptureDC = this->GetWindowDC();
	CDC* PaintToWindowDC = this->GetDC();

	CDC CaptureDC;
	VERIFY(CaptureDC.CreateCompatibleDC(WindowToCaptureDC));
	const int RestorePoint = CaptureDC.SaveDC();

	CRect CaptureWndRect;
	this->GetWindowRect(&CaptureWndRect);

	CBitmap CaptureBmp;
	VERIFY(CaptureBmp.CreateCompatibleBitmap(WindowToCaptureDC, CaptureWndRect.Width(), CaptureWndRect.Height()));
	CaptureDC.SelectObject(&CaptureBmp);

	// Capture window now
	if (this->PrintWindow(&CaptureDC, 0)){
	
		// To prevent unwanted stretching while drawing
		const int BltWidth = CaptureWndRect.Width();
		const int BltHeight = CaptureWndRect.Height();

		this->Invalidate();
		this->UpdateWindow();

		
		CImage img;
		img.Attach(HBITMAP(CaptureBmp));
		img.Save(L"print.bmp", Gdiplus::ImageFormatBMP);
		MessageBox(L"Документ распечатан в print.bmp!", L"Удачно!", MB_OK);



	CaptureDC.RestoreDC(RestorePoint);
	CaptureDC.DeleteDC();

	this->ReleaseDC(WindowToCaptureDC);
	this->ReleaseDC(PaintToWindowDC);


	}
}


void CPrDvaOdinDlg::OnMenu32784()
{
	CAboutDlg dlgAbout;
	dlgAbout.DoModal();
}


void CPrDvaOdinDlg::On32785()
{
	ShellExecute(NULL, L"open", L"https://thefobos.github.io/focusndfl4/", NULL, NULL, SW_SHOWNORMAL);

}


void CPrDvaOdinDlg::On32772()
{
	UpdateData();

	m_innv = "";
	m_corrv = "";
	m_nalperv = "";
	m_kodkatnalv = "";
	m_predvnalorgkodv = "";
	m_kodoktmov = "";
	m_famv = "";
	m_imyav = "";
	m_otchv = "";
	m_telefv = "";
	m_sumpreddohv = "";
	m_listovv = "";
	m_nalplatprednalplatv = "";
	m_fampredv = "";
	m_imyapredv = "";
	m_otchpredv = "";
	m_orgpredv = "";
	m_datadenv = "";
	m_datamesv = "";
	m_datagodv = "";
	m_dokpolnpredv = "";
	m_deklprkodv = "";
	m_zaregzanv = "";

	UpdateData(false);
}
