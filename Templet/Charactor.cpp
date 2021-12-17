#include "Charactor.h"

void Charactor::SetData()
{
	std::cout << "이름을 입력하세요 : ";
	std::cin >> m_Name;
	m_Health = rand() % 100;
	m_Mana = rand() % 100;
	m_Stemina = rand() % 100;
}
void Charactor::Show()
{
	std::cout <<
		"이름 :" <<
		m_Name <<
		" 체력 :" <<
		m_Health <<
		" 마나 :" <<
		m_Mana <<
		" 기력 :" <<
		m_Stemina <<
		std::endl;
}
void Charactor::Edit()
{
	std::cout << "이름을 입력하세요 : ";
	std::cin >> m_Name;
	std::cout << "체력을 입력하세요 : ";
	std::cin >> m_Health;
	std::cout << "마나을 입력하세요 : ";
	std::cin >> m_Mana;
	std::cout << "기력을 입력하세요 : ";
	std::cin >> m_Stemina;
}