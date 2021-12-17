#pragma once
#include "Node.h"
template <class N>
class LinkedList
{
public:
	Node<N>* NextN;
	Node<N>* HeadN;
	Node<N>* ENode;

	void AddLink(Node<N>* user);
	void LoadLink(Node<N>* user);
	void SaveLink(Node<N>* user);
	//void Edit(Node<N>* user);
	//void DeleteFile(Node<N>* user);
	void Delete(Node<N>* user);
	LinkedList()
	{
		NextN = 0;
		HeadN = 0;
		ENode = 0;
	}
	~LinkedList()
	{

	}
private:

};

