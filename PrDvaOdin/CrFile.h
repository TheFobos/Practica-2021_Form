#pragma once

class CrFile
{
public:
	CrFile();
	char * StrToChar(CString input);
	void OutputFile(CString *innv, CString *corrv, CString *nalperv, CString *kodkatnalv, CString *predvnalorgkodv, CString *kodoktmov, CString *famv, CString *imyav, CString *otchv, CString *telefv, CString *sumpreddohv, CString *listovv, CString *nalplatprednalplatv, CString *fampredv, CString *imyapredv, CString *otchpredv, CString *orgpredv, CString *datadenv, CString *datamesv, CString *datagodv, CString *dokpolnpredv, CString *deklprkodv, CString *zaregzanv);
	void InputFile(CString *innv, CString *corrv, CString *nalperv, CString *kodkatnalv, CString *predvnalorgkodv, CString *kodoktmov, CString *famv, CString *imyav, CString *otchv, CString *telefv, CString *sumpreddohv, CString *listovv, CString *nalplatprednalplatv, CString *fampredv, CString *imyapredv, CString *otchpredv, CString *orgpredv, CString *datadenv, CString *datamesv, CString *datagodv, CString *dokpolnpredv, CString *deklprkodv, CString *zaregzanv);
	void SaveStr(CString str, FILE * ptrFile);
	char * FormatFileName(char * input);
	virtual ~CrFile();
};

