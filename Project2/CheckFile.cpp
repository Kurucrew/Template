//#include "ControlMgr.h"
//
//FILE* ControlMgr::CheckFile()
//{
//	���������͸� �Ҵ��ϰ� ������ ����
//	FILE* fpCheck = NULL;
//	fopen_s(&fpCheck, "test.txt", "r + b");
//	������ ������� �׽�Ʈ �����͸� ����忡 ������ ���Ϸ� ���
//	if (fpCheck == NULL)
//	{
//		Student* NewStudent = new Student;
//		NewStudent->m_Index = 1;
//		NewStudent->m_Kor = 0;
//		NewStudent->m_Eng = 0;
//		NewStudent->m_Mat = 0;
//		NewStudent->m_Total = 0;
//		NewStudent->m_Average = 0;
//		strcpy_s(NewStudent->m_Name,"TestStudent");
//
//		fopen_s(&fpCheck, "test.txt", "wb");
//		fwrite(NewStudent, sizeof(Student),1,fpCheck);
//		fclose(fpCheck);
//		delete NewStudent;
//		NewStudent = NULL;
//		return fpCheck;
//	}
//	else
//	{
//		fclose(fpCheck);
//		return fpCheck;
//	}
//}
//ControlMgr::ControlMgr()
//{
//}
//
//ControlMgr::~ControlMgr()
//{
//}