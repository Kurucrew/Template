#include"Node.h"
template<class T>
Node<T>::Node()
{
	m_Next = nullptr;
	m_Prev = nullptr;
}
template<class T>
Node<T>::Node(T Data) : m_Data(Data)
{
	m_Next = nullptr;
	m_Prev = nullptr;
}
template<class T>
Node<T>::~Node()
{
}
