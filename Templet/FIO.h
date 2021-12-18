#pragma once
#include <iostream>
class FIO
{
	FILE* m_file = nullptr;
public:
	bool     ReadOpen(const  char* fName);
	bool     WriteOpen(const  char* fName);
	void     CloseFile();
	size_t   Write(void const* Data, int Size);
	size_t   Read(void* Data, int Size);
};

