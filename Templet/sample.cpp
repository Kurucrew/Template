#include "Control.h"
#include "WindowMgr.h"
enum Select {
	Add,Draw,Delete,Edit,Save,Load,Quit=9
};
void main()
{
	system("mode con: cols=70 lines=40");
	bool run = true;
	int Select = 0;
	LinkedList<Charactor> list;
	WindowMgr win;
	Control ctr;
	while (run)
	{
		win.Title();
		win.Choice();
		std::cin >> Select;

		switch (Select)
		{
		case Add:
		{
			win.ClearWindow();
			win.Title();
			ctr.AddCharactor();
			break;
		}
		case Draw:
		{
			win.ClearWindow();
			win.Title();
			ctr.Draw();
			win.Line();
			win.Stop();
			break;
		}
		case Delete:
		{
			win.ClearWindow();
			win.Title();
			ctr.DelCharactor();
			break;
		}
		case Edit:
		{
			win.ClearWindow();
			win.Title();
			ctr.EditCharactor();
			break;
		}
		case Save:
		{
			win.ClearWindow();
			win.Title();
			ctr.Save();
			break;
		}
		case Load:
		{
			win.ClearWindow();
			win.Title();
			ctr.Load();
			break;
		}
		case Quit:
		{
			list.clear();
			run = false;
			break;
		}
		default:
			break;
		}
		win.ClearWindow();
	}
	
}
