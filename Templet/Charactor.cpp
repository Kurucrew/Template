#include "Charactor.h"

void Charactor::SetData()
{
	std::cout << "�̸��� �Է��ϼ��� : ";
	std::cin >> m_Name;
	m_Health = rand() % 100;
	m_Mana = rand() % 100;
	m_Stemina = rand() % 100;
}
void Charactor::Show()
{
	std::cout <<
		"�̸� :" <<
		m_Name <<
		" ü�� :" <<
		m_Health <<
		" ���� :" <<
		m_Mana <<
		" ��� :" <<
		m_Stemina <<
		std::endl;
}
void Charactor::Edit()
{
	std::cout << "�̸��� �Է��ϼ��� : ";
	std::cin >> m_Name;
	std::cout << "ü���� �Է��ϼ��� : ";
	std::cin >> m_Health;
	std::cout << "������ �Է��ϼ��� : ";
	std::cin >> m_Mana;
	std::cout << "����� �Է��ϼ��� : ";
	std::cin >> m_Stemina;
}