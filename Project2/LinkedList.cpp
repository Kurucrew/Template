#include "LinkedList.h"
#include "FIO.h"

template<class N>
void LinkedList<N>::AddLink(Node<N>* user)
{
	if (HeadN == NULL)
	{
		HeadN = user;
		NextN = user;
		return;
	}
	NextN->m_Next = user;
	NextN = user;
}
template<class N>
void LinkedList<N>::LoadLink(Node<N>* user)
{
	HeadN = user;
	NextN = user;
	while (NextN->m_Next != NULL)
	{
		user = FIO::Read(user, sizeof(user));
		NextN->m_Next = user;
		NextN = user;
	}
}
template<class N>
void LinkedList<N>::Delete(Node<N>* user)
{
	if (HeadN != NULL)
	{
		while (HeadN->m_Next)
		{
			Node<N>* FreeNode = HeadN->m_Next;
			Node<N>* NextNode = FreeNode->m_Next;
			HeadN->m_Next = NextNode;
			free(FreeNode);
			FreeNode = NULL;
		}
		free(HeadN);
		HeadN = NULL;
	}
	else
	{
		return;
	}
}
template<class N>
void LinkedList<N>::SaveLink(Node<N>* user)
{
	for (user = HeadN; user != NULL; user = user->m_Next)
			{
			FIO::Write(user,sizeof(user));
			}
}