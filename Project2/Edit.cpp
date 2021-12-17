//#include "ControlMgr.h"
//
//void ControlMgr::Edit()
//{
//	int e_Index;
//	char n_Name[30];
//	int n_Kor;
//	int n_Eng;
//	int n_Mat;
//
//	if (HeadS == NULL)
//	{
//		return;
//	}
//	cout << "수정할 학생의 번호를 입력하세요 : ";
//	cin >> e_Index;
//	EStudent = HeadS;
//	if (e_Index == 00)
//	{
//		system("cls");
//		cout << "초기 화면으로 돌아갑니다" << endl;
//		return;
//	}
//	while (EStudent != NULL)
//	{
//		if (EStudent->m_Index == e_Index)
//		{
//			cout << "변경할 이름을 입력해 주세요 : ";
//			cin >> n_Name;
//			cout << endl << "변경할 국어 성적을 입력해 주세요 : ";
//			cin >> n_Kor;
//			cout << endl << "변경할 영어 성적을 입력해 주세요 : ";
//			cin >> n_Eng;
//			cout << endl << "변경할 수학 성적을 입력해 주세요 : ";
//			cin >> n_Mat;
//			strcpy_s(EStudent->m_Name,n_Name);
//			EStudent->m_Kor = n_Kor;
//			EStudent->m_Eng = n_Eng;
//			EStudent->m_Mat = n_Mat;
//			EStudent->m_Total = EStudent->m_Kor + EStudent->m_Eng + EStudent->m_Mat;
//			EStudent->m_Average = EStudent->m_Total / 3.0f;
//			
//			return;
//		}
//		EStudent = EStudent->m_Next;
//	}
//}