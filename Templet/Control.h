#pragma once
#include "LinkedList.cpp"
#include "FIO.h"
class Control
{
public:
	Control();
	~Control();
	void AddCharactor();
	void Draw();
	void DelCharactor();
	void EditCharactor();
	void Save();
	void Load();
	LinkedList<Charactor> list;
	Node<Charactor> data;
	FIO file;
	

private:

};

