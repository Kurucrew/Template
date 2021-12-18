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

size_t FIO::Write(void const* Data, int Size)
{
	size_t size = fwrite(Data, Size, 1, m_file);
	return size;
}

size_t FIO::Read(void* Data, int Size)
{
	size_t size = fread(Data, Size, 1, m_file);
	return size;
}