#include "WindowMgr.h"
void WindowMgr::Line()
{
	cout << "----------------------------------------------------------------------" << endl;
}
void WindowMgr::eLine()
{
	cout << "---                                                                ---" << endl;
}
void WindowMgr::DoubleLine()
{
	cout << "======================================================================" << endl;
}
void WindowMgr::eDoubleLine()
{
	cout << "===                                                                ===" << endl;
}
void WindowMgr::Title()
{
	DoubleLine();
	eDoubleLine();
	cout << "===              ���� ���� ����Ʈ ĳ���� ���� ���α׷�             ===" << endl;
	eDoubleLine();
	DoubleLine();
	cout << endl;
	Line();
	cout << endl;
}
void WindowMgr::Choice()
{
	Line();
	cout << "-  �߰�(0), ���(1), ����(2), ����(3), ����(4), �ҷ�����(5), ����(9) -" << endl;
	Line();
	cout << ">>";
}
void WindowMgr::ClearWindow()
{
	system("cls");
}
void WindowMgr::Stop()
{
	system("pause");
}