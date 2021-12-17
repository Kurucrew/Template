//#include "ControlMgr.h"
//
//FILE* ControlMgr::LoadFile()
//{
//	FILE* fpLoad = NULL;
//	fopen_s(&fpLoad, "test.txt", "rb");
//	if (fpLoad != NULL)
//	{
//		Student* NewStudent = new Student;
//		fread(NewStudent, sizeof(Student), 1, fpLoad);
//		HeadS = NewStudent;
//		NextP = NewStudent;
//
//		for (NextP = NewStudent; NextP->m_Next != NULL;)
//		{
//			Student* NewStudent = new Student;
//			fread(NewStudent, sizeof(Student), 1, fpLoad);
//			NextP->m_Next = NewStudent;
//			NextP = NewStudent;
//		}
//	}
//	
//	fclose(fpLoad);
//	return fpLoad;
//}