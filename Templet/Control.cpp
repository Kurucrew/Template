#include "Control.h"
void Control::AddCharactor()
{
	int Case;
	data.m_Data.SetData();
	std::cout << "추가하려는 위치를 입력하세요 앞(0), 뒤(1) :";
	std::cin >> Case;
	switch (Case)
	{
	case 0:
	{
		list.PushFront(new Node<Charactor>(data));
		break;
	}
	case 1:
	{
		list.PushBack(new Node<Charactor>(data));
		break;
	}
	default:
		break;
	}
}
void Control::Draw()
{
	for (Node<Charactor>* node = list.begin(); node != list.end(); node = list++)
	{
		node->m_Data.Show();
	}
}
void Control::DelCharactor()
{
	char name[20] = {0, };
	std::cout << "지우고 싶은 캐릭터 이름을 입력하세요 :";
	std::cin >> name;
	Node<Charactor>* find = list.find(name);
	list.erase(find);
}
void Control::EditCharactor()
{
	char name[20];
	std::cout << "수정하고 싶은 캐릭터 이름을 입력하세요 :";
	std::cin >> name;
	Node<Charactor>* find = list.find(name);
	find->m_Data.Edit();
}
void Control::Save()
{
	file.WriteOpen("test.txt");
	Node<Charactor>* node = nullptr;
	for (node = list.begin(); node->m_Next != NULL; node = node->m_Next)
		{
		file.Write(node,sizeof(Node<Charactor>));
		}
	file.CloseFile();
}
void Control::Load()
{
	file.ReadOpen("test.txt");
	Node<Charactor>* node = new Node<Charactor>;
	while (file.Read(node, sizeof(Node<Charactor>)))
	{
		list.PushBack(new Node<Charactor>(node->m_Data));
	}
	//delete node;
	file.CloseFile();
}
Control::Control()
{
}

Control::~Control()
{
}
