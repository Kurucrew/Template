//#include "ControlMgr.h"
//
//FILE* ControlMgr::SaveFile()
//{
//	FILE* fpSave = NULL;
//		fopen_s(&fpSave, "test.txt", "wb");
//	if (HeadS == NULL)
//	{
//		cout << "---------------------------------------------------------------" << endl;
//		cout << "������ �����Ͱ� �����ϴ� �����͸� ���� �ҷ��� �ּ���" << endl;
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