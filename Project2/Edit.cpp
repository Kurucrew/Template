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
//	cout << "������ �л��� ��ȣ�� �Է��ϼ��� : ";
//	cin >> e_Index;
//	EStudent = HeadS;
//	if (e_Index == 00)
//	{
//		system("cls");
//		cout << "�ʱ� ȭ������ ���ư��ϴ�" << endl;
//		return;
//	}
//	while (EStudent != NULL)
//	{
//		if (EStudent->m_Index == e_Index)
//		{
//			cout << "������ �̸��� �Է��� �ּ��� : ";
//			cin >> n_Name;
//			cout << endl << "������ ���� ������ �Է��� �ּ��� : ";
//			cin >> n_Kor;
//			cout << endl << "������ ���� ������ �Է��� �ּ��� : ";
//			cin >> n_Eng;
//			cout << endl << "������ ���� ������ �Է��� �ּ��� : ";
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