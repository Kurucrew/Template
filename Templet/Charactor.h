#pragma once
#include<iostream>
#include <stdlib.h>
class Charactor
{
public:
	char m_Name[20] = {0, };
	int m_Health;
	int m_Mana;
	int m_Stemina;
	void SetData();
	void Show();
	void Edit();


private:

};
