#pragma once
#include<iostream>
#include"Node.h"
class FIO
{
public:
	FILE* m_fio = nullptr;
	bool     FOpenW(const char* fName);
	bool     FOpenR(const char* fName);
	void     CloseFile();
	Node<Student>* Write(Node<Student>* fData, int fSize);
	Node<Student>* Read(Node<Student>* fData, int fSize);
private:

};

