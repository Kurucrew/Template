#include "ControlMgr.h"

Node<Student>* ControlMgr::AddNode()
{
	char Name[30];
	int Kor=0;
	int Eng=0;
	int Mat=0;
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> Name;
	cout << "\n���� ������ �Է��ϼ��� : ";
	cin >> Kor;
	cout << "\n���� ������ �Է��ϼ��� : ";
	cin >> Eng;
	cout << "\n���� ������ �Է��ϼ��� : ";
	cin >> Mat;
	Node<Student>* NewNode = new Node<Student>();
	Student* NewStudent = new Student;

	NewStudent->SetData(Name, Kor, Eng, Mat);
	NewNode->m_Data = NewStudent;

	
	return NewNode;
}

void ControlMgr::Add()
{
	m_List.AddLink(AddNode());
}

void ControlMgr::CheckFile(const char* fName)
{
	if (m_FIO.FOpenR(fName))
	{
		Node<Student>* LoadN = new Node<Student>;
		m_FIO.Read(LoadN, sizeof(Node<Student>));
		m_List.Delete(LoadN);
		m_FIO.CloseFile();
		return;
	}
	cout << "����� �����Ͱ� �����ϴ� �����͸� �Է��� �ּ���" << endl;
	Add();
}

void ControlMgr::SaveFile(const char* fName)
{
	m_FIO.FOpenW(fName);
	Node<Student>* SaveNode = new Node<Student>;
	m_List.SaveLink(SaveNode);
	m_FIO.CloseFile();
}

void ControlMgr::LoadFile(const char* fName)
{
	m_FIO.FOpenR(fName);
	Node<Student>* LoadN = new Node<Student>;
	m_List.LoadLink(LoadN);
	m_FIO.CloseFile();
}