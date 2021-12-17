#pragma once
#include"Student.h"
template<class N>
class Node
{
public:
	Node();
	Node(N* data);
	~Node();
	N* m_Data;
	Node* m_Next;
private:
};

template<class N>
Node<N>::Node()
{
	m_Data = nullptr;
}
template<class N>
Node<N>::Node(N* data)
{
	m_Data = data;
}
template<class N>
Node<N>::~Node()
{
	delete m_Data;
}