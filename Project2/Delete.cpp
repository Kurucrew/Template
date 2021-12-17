//#include "ControlMgr.h"
//
//void ControlMgr::Delete()
//{
//	if (HeadS != NULL)
//	{
//		while (HeadS->m_Next)
//		{
//			Student* FreeNode = HeadS->m_Next;
//			Student* NextNode = FreeNode->m_Next;
//			HeadS->m_Next = NextNode;
//			free(FreeNode);
//			FreeNode = NULL;
//		}
//		free(HeadS);
//		HeadS = NULL;
//	}
//	else
//	{
//		return;
//	}
//}