#include "FIO.h"
bool FIO::ReadOpen(const  char* fName)
{
	fopen_s(&m_file, fName, "rb");
	if (m_file == nullptr) return false;
	return true;
}
bool FIO::WriteOpen(const  char* fName)
{
	fopen_s(&m_file, fName, "w+b");
	if (m_file == nullptr) return false;
	return true;
}
void FIO::CloseFile()
{
	fclose(m_file);
	m_file = nullptr;
}
FILE* FIO::Write(void const* Data, int Size)
{
	fwrite(Data, Size, 1, m_file);
	return nullptr;
}
FILE* FIO::Read(void* Data, int Size)
{
	 fread(Data, Size, 1, m_file);
	 return m_file;
}