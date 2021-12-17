//#include "ControlMgr.h"
//
//FILE* ControlMgr::CheckFile()
//{
//	파일포인터를 할당하고 파일을 오픈
//	FILE* fpCheck = NULL;
//	fopen_s(&fpCheck, "test.txt", "r + b");
//	파일이 없을경우 테스트 데이터를 헤드노드에 저장후 파일로 출력
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