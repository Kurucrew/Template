#pragma once
#include "Node.cpp"
template<class T>
class LinkedList
{	Node<T>* m_Head;
	Node<T>* m_Tail;
	Node<T>* m_Current;
public:
	Node<T>* begin();
	Node<T>* end();
	Node<T>* rbegin();
	Node<T>* rend();
	Node<T>* operator ++(int);
	Node<T>* operator ++(void);
	Node<T>* erase(Node<T>* node);
	void PushBack(Node<T>* node);
	void PushFront(Node<T>* node);
	void insert(Node<T>* Posnode, Node<T>* node);
	Node<T>* find(int value);
	void clear();
	LinkedList();
	virtual ~LinkedList();

private:

};

