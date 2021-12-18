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
	cout << "===              이중 연결 리스트 캐릭터 관리 프로그램             ===" << endl;
	eDoubleLine();
	DoubleLine();
	cout << endl;
	Line();
	cout << endl;
}
void WindowMgr::Choice()
{
	Line();
	cout << "-  추가(0), 출력(1), 삭제(2), 수정(3), 저장(4), 불러오기(5), 종료(9) -" << endl;
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