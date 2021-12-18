#pragma once
#include <iostream>
class FIO
{
	FILE* m_file = nullptr;
public:
	bool     ReadOpen(const  char* fName);
	bool     WriteOpen(const  char* fName);
	void     CloseFile();
	FILE*   Write(void const* Data, int Size);
	FILE*   Read(void* Data, int Size);
};

