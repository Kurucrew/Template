//#include "ControlMgr.h"
//
//void ControlMgr::DeleteNode()
//{
//	int d_Index;
//
//	if (HeadS == NULL)
//	{
//		return;
//	}
//	
//	
//	cout << "������ �л��� ��ȣ�� �Է��ϼ��� : ";
//	cin >> d_Index;
//
//	if (d_Index == 00)
//	{
//		system("cls");
//		cout << "�ʱ� ȭ������ ���ư��ϴ�" << endl;
//		return;
//	}
//	Student* DeletNode;
//	Student* Head = HeadS;
//	Student* Pre = HeadS;
//	Student* SIndex = HeadS;
//	if (Head->m_Index == d_Index)
//	{
//		HeadS = Head->m_Next;
//		free(Head);
//		Head = NULL;
//		SIndex = HeadS;
//		//SIndex->s_Index - 1;
//		while (SIndex != NULL)
//		{
//			SIndex->m_Index -= 1;
//			SIndex = SIndex->m_Next;
//		}
//		
//		return;
//	}
//	while (Pre != NULL)
//	{
//		if (Pre->m_Index == d_Index-1)
//		{
//			DeletNode = Pre->m_Next;
//			Pre->m_Next = DeletNode->m_Next;
//			free(DeletNode);
//			DeletNode = NULL;
//			SIndex = Pre->m_Next;
//			//SIndex->s_Index - 1;
//			while (SIndex != NULL)
//			{
//				SIndex->m_Index -= 1;
//				SIndex = SIndex->m_Next;
//			}
//			
//			return;
//		}
//		Pre = Pre->m_Next;
//	}
//}