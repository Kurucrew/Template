//#include "ControlMgr.h"
//
//void ControlMgr::Add()
//{
//	char Name[30];
//	int Kor;
//	int Eng;
//	int Mat;
//
//	if (HeadS == NULL)//����尡 ����ִ��� Ȯ��
//	{
//		cout << "---------------------------------------------------------------" << endl;
//		cout << "�����͸� ���� �ҷ��� �ּ���" << endl;
//		return;
//	}
//	else
//	{
//		cout << "�̸��� �Է��ϼ��� : ";
//		cin >> Name;
//		cout << "\n���� ������ �Է��ϼ��� : ";
//		cin >> Kor;
//		cout << "\n���� ������ �Է��ϼ��� : ";
//		cin >> Eng;
//		cout << "\n���� ������ �Է��ϼ��� : ";
//		cin >> Mat;
//		//�޸𸮸� �Ҵ��ѵ� �Է¹��� ������ ���� �����ͺ����� ������ �Է�
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
//		//���ο� ��带 ���Ḯ��Ʈ�� ����
//		NextP->m_Next = NewStudent;
//		NextP = NewStudent;
//	}
//	
//}
