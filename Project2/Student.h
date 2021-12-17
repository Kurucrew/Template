#pragma once
#include <string>
using namespace std;

class Student
{
public:
	int m_Index = 0;
	static int t_Index;
	int m_Kor;
	int m_Eng;
	int m_Mat;
	int m_Total;
	float m_Average;
	char m_Name[30];
	void SetData(char name[30], int kor, int eng, int mat);
	Student();
	~Student();
	
};
