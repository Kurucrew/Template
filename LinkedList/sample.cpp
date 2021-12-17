#include "LinkedList.cpp"

void main()
{
	LinkedList<T> list;
	for (int i = 0; i < 10; i++)
	{
		list.PushBack(new Node<T>*(i));
	}
	Node<T>* find = list.find(3);
	list.erase(find);
	for (int i = 0; i < 10; i++)
	{
		list.PushFront(new Node<T>*(i));
	}
	for (Node<T>* node = list.begin(); node != list.end(); node = list++)
	{
		std::cout << node->m_Val << " ";
	}
	std::cout << "end" << std::endl;
	for (Node<T>** node = list.rbegin(); node != list.rend(); node = ++list)
	{
		std::cout << node->m_Val << " ";
	}
	std::cout << "end";
	list.clear();
}
