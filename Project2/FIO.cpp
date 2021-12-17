#include"FIO.h"

bool FIO::FOpenR(const char* fName)
{
	fopen_s(&m_fio, fName, "rb");
	if (m_fio == nullptr) return false;
	return true;
}

bool FIO::FOpenW(const char* fName)
{
	fopen_s(&m_fio, fName, "w+b");
	if (m_fio == nullptr) return false;
	return true;
}

Node<Student>* FIO::Read(Node<Student>* fData, int fSize)
{
	fread(fData, fSize, 1, m_fio);
	return fData;
}

void FIO::CloseFile()
{
	fclose(m_fio);
	m_fio = nullptr;
}

Node<Student>* FIO::Write(Node<Student>* fData, int fSize)
{
	fwrite(fData, fSize, 1, m_fio);
	return fData;
}