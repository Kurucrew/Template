#include"LinkedList.h"
template<class T>
LinkedList<T>::LinkedList()
{
	m_Head = new Node<T>;
	m_Tail = new Node<T>;
	m_Head->m_Next = m_Tail;
	m_Tail->m_Prev = m_Head;
}
template<class T>
LinkedList<T>::~LinkedList()
{
	delete m_Head;
	delete m_Tail;
	m_Head = nullptr;
	m_Tail = nullptr;
}
template<class T>
void LinkedList<T>::PushBack(Node<T>* node)
{
	Node<T>* Link = m_Tail->m_Prev;
	Link->m_Next = node;
	node->m_Next = m_Tail;

	m_Tail->m_Prev = node;
	node->m_Prev = Link;
}
template<class T>
void LinkedList<T>::PushFront(Node<T>* node)
{
	Node<T>* Link = m_Head->m_Next;
	m_Head->m_Next = node;
	node->m_Next = Link;

	Link->m_Prev = node;
	node->m_Prev = m_Head;
}
template<class T>
Node<T>* LinkedList<T>::begin()
{
	m_Current = m_Head->m_Next;
	return m_Current;
}
template<class T>
Node<T>* LinkedList<T>::end()
{
	return m_Tail;
}
template<class T>
Node<T>* LinkedList<T>::operator++(int)//a++
{
	m_Current = m_Current->m_Next;
	return m_Current;
}
template<class T>
Node<T>* LinkedList<T>::operator++(void)//++a
{
	m_Current = m_Current->m_Prev;
	return m_Current;
}
template<class T>
Node<T>* LinkedList<T>::rbegin()
{
	m_Current = m_Tail->m_Prev;
	return m_Current;
}
template<class T>
Node<T>* LinkedList<T>::rend()
{
	return m_Head;
}
template<class T>
Node<T>* LinkedList<T>::erase(Node<T>* node)
{
#ifdef _DEBUG
	_ASSERT(m_Head);
	_ASSERT(m_Tail);
	_ASSERT(node);
#endif
	/*if (node == m_Head) return nullptr;
	if (node == m_Tail) return nullptr;
	if (node == nullptr) return nullptr;*/
	Node<T>* prev = node->m_Prev;
	Node<T>* next = node->m_Next;
	delete node;
	prev->m_Next = next;
	next->m_Prev = prev;
	return next;
}
template<class T>
void LinkedList<T>::clear()
{
	Node<T>* delnode = begin();
	while (delnode != end())
	{
		delnode = erase(delnode);
	}
}
template<class T>
void LinkedList<T>::insert(Node<T>* Posnode, Node<T>* node)
{
	Node<T>* Link = Posnode->m_Next;
	Posnode->m_Next = node;
	node->m_Next = Link;

	Link->m_Prev = node;
	node->m_Prev = Posnode;
}
template<class T>
Node<T>* LinkedList<T>::find(char value[20])
{
	for (Node<T>* node = begin(); node != end(); node = node->m_Next)
	{
		if (node->m_Data.m_Name == value)
		{
			return node;
		}
	}
}
template<class T>
Node<T>* LinkedList<T>::GetHead(Node<T>* data)
{
	data = m_Head;
	return data;
}
template<class T>
Node<T>* LinkedList<T>::SetHead(Node<T>* data)
{
	m_Head = data;
	return m_Head;
}