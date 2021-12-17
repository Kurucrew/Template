//#include "ControlMgr.h"
//
//void ControlMgr::Add()
//{
//	char Name[30];
//	int Kor;
//	int Eng;
//	int Mat;
//
//	if (HeadS == NULL)//헤드노드가 비어있는지 확인
//	{
//		cout << "---------------------------------------------------------------" << endl;
//		cout << "데이터를 먼저 불러와 주세요" << endl;
//		return;
//	}
//	else
//	{
//		cout << "이름을 입력하세요 : ";
//		cin >> Name;
//		cout << "\n국어 성적을 입력하세요 : ";
//		cin >> Kor;
//		cout << "\n영어 성적을 입력하세요 : ";
//		cin >> Eng;
//		cout << "\n수학 성적을 입력하세요 : ";
//		cin >> Mat;
//		//메모리를 할당한뒤 입력받은 정보를 토대로 포인터변수에 데이터 입력
//		Student* NewStudent = new Student;
//		NewStudent->m_Index = NextP->m_Index+1;
//		//NewStudent->s_Index + 1;
//		strcpy_s(NewStudent->m_Name, Name);
//		NewStudent->m_Kor = Kor;
//		NewStudent->m_Eng = Eng;
//		NewStudent->m_Mat = Mat;
//		NewStudent->m_Total = NewStudent->m_Kor + NewStudent->m_Eng + NewStudent->m_Mat;
//		NewStudent->m_Average = NewStudent->m_Total / 3.0f;
//		m_Next = NULL;
//		//새로운 노드를 연결리스트에 연결
//		NextP->m_Next = NewStudent;
//		NextP = NewStudent;
//	}
//	
//}
