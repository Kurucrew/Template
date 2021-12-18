//#include "controlmgr.h"
//
//file* controlmgr::loadfile()
//{
//	file* fpload = null;
//	fopen_s(&fpload, "test.txt", "rb");
//	if (fpload != null)
//	{
//		student* newstudent = new student;
//		fread(newstudent, sizeof(student), 1, fpload);
//		heads = newstudent;
//		nextp = newstudent;
//
//		for (nextp = newstudent; nextp->m_next != null;)
//		{
//			student* newstudent = new student;
//			fread(newstudent, sizeof(student), 1, fpload);
//			nextp->m_next = newstudent;
//			nextp = newstudent;
//		}
//	}
//	
//	fclose(fpload);
//	return fpload;
//}