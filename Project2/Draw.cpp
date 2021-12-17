//#include "ControlMgr.h"
//
//void ControlMgr::Draw()
//{
//	if (HeadS == NULL)
//	{
//		cout << "---------------------------------------------------------------" << endl;
//		cout << "출력할 데이터가 없습니다 데이터를 먼저 불러와 주세요" << endl;
//	}
//	Student* NewStudent = HeadS;
//	cout << NewStudent;
//	for (NewStudent = HeadS; NewStudent != NULL; NewStudent = NewStudent->m_Next)
//	{
//		cout << "---------------------------------------------------------------" << endl;
//		cout << "번호 : " << NewStudent->m_Index
//			<< " 이름 : " << NewStudent->m_Name
//			<< " 국어 : " << NewStudent->m_Kor
//			<< " 영어 : " << NewStudent->m_Eng
//			<< " 수학 : " << NewStudent->m_Mat
//			<< " 총점 : " << NewStudent->m_Total
//			<< " 평균 : " << NewStudent->m_Average
//			<<endl;
//	}
//}