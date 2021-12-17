#pragma once
#include <iostream>
#include"LinkedList.cpp"
#include "FIO.h"

class ControlMgr
{
public:
	ControlMgr()
	{

	}
	~ControlMgr()
	{

	}
	Node<Student>* AddNode();
	void CheckFile(const char* fName);
	void Add();
	/*void Edit();*/
	void SaveFile(const char* fName);
	void LoadFile(const char* fName);
	/*void Draw();
	void DeleteNode();*/

	LinkedList<Student> m_List;
	FIO m_FIO;
};

