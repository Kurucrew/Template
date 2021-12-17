//#include "ControlMgr.h"
//
//FILE* ControlMgr::SaveFile()
//{
//	FILE* fpSave = NULL;
//		fopen_s(&fpSave, "test.txt", "wb");
//	if (HeadS == NULL)
//	{
//		cout << "---------------------------------------------------------------" << endl;
//		cout << "저장할 데이터가 없습니다 데이터를 먼저 불러와 주세요" << endl;
//		fclose(fpSave);
//		return fpSave;
//	}
//	for (Student* NewStudent = HeadS; NewStudent != NULL; NewStudent = NewStudent->m_Next)
//	{
//		fwrite(NewStudent, sizeof(Student), 1, fpSave);
//	}
//	
//	fclose(fpSave);
//	return fpSave;
//}