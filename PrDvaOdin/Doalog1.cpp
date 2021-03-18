// Doalog1.cpp: файл реализации
//

#include "stdafx.h"
#include "PrDvaOdin.h"
#include "Doalog1.h"
#include "afxdialogex.h"
#include <windows.h>
#include <fstream>
#include "windows.h"
using namespace std;
int cou(0);
CString list[18];

// диалоговое окно Doalog1

IMPLEMENT_DYNAMIC(Doalog1, CDialogEx)

Doalog1::Doalog1(CWnd* pParent /*=NULL*/)
	: CDialogEx(Doalog1::IDD, pParent)
	, m_poisk(_T(""))

{

}

Doalog1::~Doalog1()
{
}

void Doalog1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MSFLEXGRID1, m_Grid);

	//  DDX_Text(pDX, IDC_EDIT1, m_poisk);
	DDX_Text(pDX, IDC_EDIT1, m_poisk);
}


BEGIN_MESSAGE_MAP(Doalog1, CDialogEx)
//	ON_COMMAND(IDD_DIALOG1, &Doalog1::OnIddDialog1)
		ON_COMMAND(ID_32787, &Doalog1::On32787)
		ON_COMMAND(ID_32788, &Doalog1::On32788)
		ON_BN_CLICKED(IDC_BUTTON2, &Doalog1::OnBnClickedButton2)
		ON_BN_CLICKED(IDC_BUTTON3, &Doalog1::OnBnClickedButton3)
END_MESSAGE_MAP()


// обработчики сообщений Doalog1




void Doalog1::OnBnClickedButton1()
{

}


BOOL Doalog1::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	UpdateData();
	CString strName, strRemarks;
	cou = 0;
	int nCols = m_Grid.get_Cols();
	int nRows = m_Grid.get_Rows();
	int nRow = 0;
	int nCol = 0;
	
	// Clear and refresh the grid   
	m_Grid.Clear();
	m_Grid.Refresh();

	
	m_Grid.put_TextArray((nRow*nCols) + nCol, L"ИНН");
	m_Grid.put_ColWidth((nRow*nCols) + nCol,2000);
	nCol++;
	m_Grid.put_TextArray((nRow*nCols) + nCol, L"Имя");
	m_Grid.put_ColWidth((nRow*nCols) + nCol, 2000);
	nCol++;
	m_Grid.put_TextArray((nRow*nCols) + nCol, L"Фамилия");
	m_Grid.put_ColWidth((nRow*nCols) + nCol, 2000);
	nCol++;
	m_Grid.put_TextArray((nRow*nCols) + nCol, L"Отчество");
	m_Grid.put_ColWidth((nRow*nCols) + nCol, 2000);

	
	


	// Redraw the grid
	m_Grid.SetRedraw(TRUE);
	m_Grid.Refresh();

	UpdateData(false);

	return TRUE;  // return TRUE unless you set the focus to a control
	// Исключение: страница свойств OCX должна возвращать значение FALSE
}

char * Doalog1::FormatFileName(char * input)
{

	char * temp = new char[360];
	char * result = new char[360];
	int r = 1;
	int c = 0;

	strncpy(temp, input, 360);
	for (int i = 0; i < 360; i++){
		if (temp[i] != '\0') { r++; }
	}


	strncpy(temp, input, 360);

	int j = 0;
	for (int i = 0; i <r; i++){

		if (temp[i] == 92){
			result[j] = '\\';
			result[j + 1] = '\\';
			result[j + 2] = '\0';
			j = j + 2;
			c++;
		}
		else { result[j] = temp[i]; result[j + 1] = '\0'; j++; }
	}
	char * res = new char[r + c - 1];

	for (int i = 0; i < 360; i++){
		if (temp[i] != '\0') { r++; }
	}

	//strncpy(res, result, r + c-);
	//	sprintf(res, "%d", r+c );

	return res;
}

char * Doalog1::StrToChar(CString input)
{
	char * result = new char[180];
	//result = "";
	CStringA csA(input);
	strcpy(result, csA.GetBuffer());
	csA.ReleaseBuffer();

	return result;
}

void Doalog1::On32787()
{
	UpdateData();
	OPENFILENAME ofn;
	wchar_t szFile[1000];
	HWND hwnd = GetConsoleWindow();
	HANDLE hFile;//это дискрептор открытого файла
	
	ZeroMemory(&ofn, sizeof(ofn));
	ofn.lStructSize = sizeof(ofn);
	ofn.hwndOwner = NULL;
	ofn.lpstrFile = szFile;
	ofn.lpstrFile[0] = '\0';
	ofn.nMaxFile = sizeof(szFile);
	ofn.lpstrFilter = L"Текстовый файл(*.txt)\0*.txt\0";
	ofn.nFilterIndex = 1;
	ofn.lpstrFileTitle = NULL;
	ofn.nMaxFileTitle = 0;
	ofn.lpstrInitialDir = NULL;
	ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;

	if (GetOpenFileName(&ofn) == TRUE){ hFile = CreateFile(ofn.lpstrFile, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0); }

	char temp[1000];
	

	wchar_t awcBuffer[1024];
	WideCharToMultiByte(CP_UTF8, 0, szFile, -1, temp, sizeof(temp), '\0', '\0');
	
	
	FILE * ptrFile = fopen(temp, "r");


	if (ptrFile != NULL)
	{
		
		cou++;
	

		UpdateData();
		CString strName, strRemarks;

		int nCols = m_Grid.get_Cols();
		int nRow = cou;
		int nCol = 0;
		
		// Clear and refresh the grid   
		m_Grid.Refresh();

		fgets(temp, 100, ptrFile);
		MultiByteToWideChar(CP_UTF8, 0, temp, -1, awcBuffer, sizeof(awcBuffer));
		m_Grid.put_TextArray((nRow*nCols) + nCol, awcBuffer);
		list[cou-1] = temp;

		nCol++;
		MultiByteToWideChar(1251, 0, fgets(temp, 100, ptrFile), -1, awcBuffer, sizeof(awcBuffer));
		MultiByteToWideChar(1251, 0, fgets(temp, 100, ptrFile), -1, awcBuffer, sizeof(awcBuffer));
		MultiByteToWideChar(1251, 0, fgets(temp, 100, ptrFile), -1, awcBuffer, sizeof(awcBuffer));
		MultiByteToWideChar(1251, 0, fgets(temp, 100, ptrFile), -1, awcBuffer, sizeof(awcBuffer));
		MultiByteToWideChar(1251, 0, fgets(temp, 100, ptrFile), -1, awcBuffer, sizeof(awcBuffer));
		MultiByteToWideChar(1251, 0, fgets(temp, 100, ptrFile), -1, awcBuffer, sizeof(awcBuffer));
		m_Grid.put_TextArray((nRow*nCols) + nCol, awcBuffer);
		nCol++;
		MultiByteToWideChar(1251, 0, fgets(temp, 100, ptrFile), -1, awcBuffer, sizeof(awcBuffer));
		m_Grid.put_TextArray((nRow*nCols) + nCol, awcBuffer);
		nCol++;
		MultiByteToWideChar(1251, 0, fgets(temp, 100, ptrFile), -1, awcBuffer, sizeof(awcBuffer));
		m_Grid.put_TextArray((nRow*nCols) + nCol, awcBuffer);
	
	

		// Redraw the grid

		m_Grid.SetRedraw(TRUE);
		m_Grid.Refresh();

		UpdateData(false);


		fclose(ptrFile);
	}



	UpdateData(false);


}



void Doalog1::On32788()
{
	m_Grid.Refresh();
	m_Grid.Clear();
	OnInitDialog();
}


void Doalog1::OnBnClickedButton2()
{
	/*CString temp;
	int n = cou;
	CString p[100];
	char * tm = new char[];
	int nCols = m_Grid.get_Cols();
	int nRow = 0;
	int nCol = 0;
	int i = 0;
	int j = 0;
	unsigned long long int a = 0;
	unsigned long long int b = 0;
	char *intStr=new char[];
	for (i = 0; i<n; i++) { p[i] = m_Grid.get_TextMatrix(i, 0); }
	
	
	unsigned long long int * arr = new unsigned long long int[];
		int size=cou;
	
		int tmp;

		for (i = 0; i < size; i++) // i - номер прохода
		{
			arr[i]= atoll(StrToChar(list[i]));
		}

		for (i = 0; i < size - 1; i++) // i - номер прохода
		{
			for (j = 0; j < size - 1; j++) // внутренний цикл прохода
			{
				if (arr[j + 1] > arr[j])
				{
					MessageBox(L"1", L"Test");
					tmp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = tmp;
					for (int x = 0; x<nCols; x++){

						temp = m_Grid.get_TextMatrix(j + 2, x);
						m_Grid.put_TextMatrix(j + 2, x, m_Grid.get_TextMatrix(j+1, x));
						m_Grid.put_TextMatrix(j+1, x, temp);


					}
				}
			}
		}
	
		for (i = 0; i < size; i++) // i - номер прохода
		{

			_ltoa(arr[i],tm, 100);
			wchar_t awcBuffer[1024];
			MultiByteToWideChar(1251, 0, tm, -1, awcBuffer, sizeof(awcBuffer));
			
			m_Grid.put_TextArray(((i+1)*nCols) + 0, awcBuffer);
		}*/
}


void Doalog1::OnBnClickedButton3()
{
	UpdateData();
	CString temp;
	temp = "";
	int n = cou+1;
	int nCols = m_Grid.get_Cols();
	int nRow = 0;
	int nCol = 0;
	int i;
	unsigned long long int a = 0;
	unsigned long long int b = 0;
	
	for (i = 0; i<n; i++) { 
		
		a = atoll(StrToChar(list[i]));
		b = atoll(StrToChar(m_poisk));

		if (a==b)
		{
			
			temp = L"Найдено:" + m_Grid.get_TextMatrix(i + 1, 1) + m_Grid.get_TextMatrix(i + 1, 2) + m_Grid.get_TextMatrix(i + 1, 3);

			MessageBox(temp, L"Test");
		}
		//wchar_t wr[1000];
//		MultiByteToWideChar(1251, 0, temp, -1, wr, sizeof(wr));
	//	MessageBox(wr, L"Test");
	}

	
	UpdateData(false);
}


