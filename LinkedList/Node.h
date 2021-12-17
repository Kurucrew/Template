#pragma once
#include <iostream>
#include<assert.h>
template<class T>
class LinkedList;
template<class T>
class Node
{
public:
	T m_Data;
public:
	Node();
	Node(T Data);
	virtual ~Node();
	Node<T>* m_Next;
	Node<T>* m_Prev;
private:

};