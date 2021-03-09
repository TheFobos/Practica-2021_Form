
#include "stdafx.h"
#include "stdio.h"
#include <fstream>
#include "CrFile.h"
#include "windows.h"
using namespace std;




CrFile::CrFile()
{
}




char * CrFile::StrToChar(CString input)
{
	char * result = new char[180];
	*result = '\0';
	CStringA csA(input);
	strcpy(result, csA.GetBuffer());
	csA.ReleaseBuffer();

	return result;
}

void CrFile::SaveStr(CString str, FILE * ptrFile)
{
	char * temp = new char[180];

	temp = { 0 };
	
	temp = StrToChar(str);

	if (*temp == '\0')	temp = "(# > <)";

	fputs(temp, ptrFile);
	fputc('\n', ptrFile);
}

char * CrFile::FormatFileName(char * input)
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
			result[j+1] = '\\';
			result[j + 2] = '\0';
			j=j+2;
			c++;
		}
		else { result[j] = temp[i]; result[j + 1] = '\0'; j++; }
	}
	char * res = new char[r + c-1];
	
	for (int i = 0; i < 360; i++){
		if (temp[i] != '\0') { r++; }
	}

	//strncpy(res, result, r + c-);
//	sprintf(res, "%d", r+c );
	return res;
}

void CrFile::OutputFile(CString *innv, CString *corrv, CString *nalperv, CString *kodkatnalv, CString *predvnalorgkodv, CString *kodoktmov, CString *famv, CString *imyav, CString *otchv, CString *telefv, CString *sumpreddohv, CString *listovv, CString *nalplatprednalplatv, CString *fampredv, CString *imyapredv, CString *otchpredv, CString *orgpredv, CString *datadenv, CString *datamesv, CString *datagodv, CString *dokpolnpredv, CString *deklprkodv, CString *zaregzanv)
{


	
	char *zar=StrToChar(*zaregzanv);
	strcat(zar, ".txt");
	wchar_t awcBuffer[1024];
	MultiByteToWideChar(CP_UTF8, 0, zar, -1, awcBuffer, sizeof(awcBuffer));
	
	CFileDialog mFileSaveAs(FALSE, L".txt", awcBuffer, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, L"Текстовый файл(*.txt)|*.txt|");

	// отображение стандартной панели выбора файла SaveAs
	if (mFileSaveAs.DoModal() == IDOK)
	{

	
		

		FILE * ptrFile = fopen(StrToChar(mFileSaveAs.GetPathName()), "w+");

	if (ptrFile != NULL)
		{
		SaveStr(*innv, ptrFile);
		SaveStr(*corrv, ptrFile);
		SaveStr(*nalperv, ptrFile);
		SaveStr(*kodkatnalv, ptrFile);
		SaveStr(*predvnalorgkodv, ptrFile);
		SaveStr(*kodoktmov, ptrFile);
		SaveStr(*famv, ptrFile);
		SaveStr(*imyav, ptrFile);
		SaveStr(*otchv, ptrFile);
		SaveStr(*telefv, ptrFile);
		SaveStr(*sumpreddohv, ptrFile);
		SaveStr(*listovv, ptrFile);
		SaveStr(*nalplatprednalplatv, ptrFile);
		SaveStr(*fampredv, ptrFile);
		SaveStr(*imyapredv, ptrFile);
		SaveStr(*otchpredv, ptrFile);
		SaveStr(*orgpredv, ptrFile);
		SaveStr(*datadenv, ptrFile);
		SaveStr(*datamesv, ptrFile);
		SaveStr(*datagodv, ptrFile);
		SaveStr(*dokpolnpredv, ptrFile);
		SaveStr(*deklprkodv, ptrFile);
		SaveStr(*zaregzanv, ptrFile);
		fclose(ptrFile);
		}
	}
}

void CrFile::InputFile(CString *innv, CString *corrv, CString *nalperv, CString *kodkatnalv, CString *predvnalorgkodv, CString *kodoktmov, CString *famv, CString *imyav, CString *otchv, CString *telefv, CString *sumpreddohv, CString *listovv, CString *nalplatprednalplatv, CString *fampredv, CString *imyapredv, CString *otchpredv, CString *orgpredv, CString *datadenv, CString *datamesv, CString *datagodv, CString *dokpolnpredv, CString *deklprkodv, CString *zaregzanv)
{

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

	if (GetOpenFileName(&ofn) == TRUE){hFile = CreateFile(ofn.lpstrFile, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);}
	
	char temp[180];
	for (int i = 0; i <180; i++){
		temp[i] = '\0';}

	wchar_t awcBuffer[1024];
	WideCharToMultiByte(CP_UTF8, 0, szFile, -1, temp, sizeof(temp), '\0', '\0');
	MultiByteToWideChar(CP_UTF8, 0, FormatFileName(temp), -1, awcBuffer, sizeof(awcBuffer));


	FILE * ptrFile = fopen(temp, "r");

	if (ptrFile != NULL)
	{

		*innv = fgets(temp, 100, ptrFile);
		*corrv = fgets(temp, 100, ptrFile);
		*nalperv = fgets(temp, 100, ptrFile);
		*kodkatnalv = fgets(temp, 100, ptrFile);
		*predvnalorgkodv = fgets(temp, 100, ptrFile);
		*kodoktmov = fgets(temp, 100, ptrFile);
		*famv = fgets(temp, 100, ptrFile);
		*imyav = fgets(temp, 100, ptrFile);
		*otchv = fgets(temp, 100, ptrFile);
		*telefv = fgets(temp, 100, ptrFile);
		*sumpreddohv = fgets(temp, 100, ptrFile);
		*listovv = fgets(temp, 100, ptrFile);
		*nalplatprednalplatv = fgets(temp, 100, ptrFile);
		*fampredv = fgets(temp, 100, ptrFile);
		*imyapredv = fgets(temp, 100, ptrFile);
		*otchpredv = fgets(temp, 100, ptrFile);
		*orgpredv = fgets(temp, 100, ptrFile);
		*datadenv = fgets(temp, 100, ptrFile);
		*datamesv = fgets(temp, 100, ptrFile);
		*datagodv = fgets(temp, 100, ptrFile);
		*dokpolnpredv = fgets(temp, 100, ptrFile);
		*deklprkodv = fgets(temp, 100, ptrFile);
		*zaregzanv = fgets(temp, 100, ptrFile);


		fclose(ptrFile);
	}
	



}

CrFile::~CrFile()
{
}
