#include "Control.h"
void Control::AddCharactor()
{
	int Case;
	data.m_Data.SetData();
	std::cout << "�߰��Ϸ��� ��ġ�� �Է��ϼ��� ��(0), ��(1) :";
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
	char name[20];
	std::cout << "����� ���� ĳ���� �̸��� �Է��ϼ��� :";
	std::cin >> name;
	Node<Charactor>* find = list.find(name);
	list.erase(find);
}
void Control::EditCharactor()
{
	char name[20];
	std::cout << "�����ϰ� ���� ĳ���� �̸��� �Է��ϼ��� :";
	std::cin >> name;
	Node<Charactor>* find = list.find(name);
	find->m_Data.Edit();
}
void Control::Save()
{
	file.WriteOpen("test.txt");
	for (Node<Charactor>* node = list.begin(); node != NULL; node = node->m_Next)
		{
		file.Write(node,sizeof(node));
		}
	file.CloseFile();
}
void Control::Load()
{
	file.ReadOpen("test.txt");
	Node<Charactor>* node = new Node<Charactor>;
	node = list.GetHead(node);
	file.Read(node, sizeof(node));
	for (data.m_Next = node;data.m_Next->m_Next != NULL;)
	{
		file.Read(node, sizeof(node));
		//list.PushBack(node);
		data.m_Next->m_Next = node;
		data.m_Next = node;
	}
	file.CloseFile();
}
Control::Control()
{
}

Control::~Control()
{
}
