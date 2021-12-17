#include"Student.h"
int Student::t_Index = 1;
void Student::SetData(char name[30], int kor, int eng, int mat)
{
	strcpy_s(m_Name, name);
	m_Index = t_Index;
	m_Kor = kor;
	m_Eng = eng;
	m_Mat = mat;
	m_Total = m_Kor + m_Eng + m_Mat;
	m_Average = m_Total / 3.0f;
	t_Index++;
}
Student::Student()
{
}

Student::~Student()
{
}