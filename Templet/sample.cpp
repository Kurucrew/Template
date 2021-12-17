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
			ctr.AddCharactor();
			break;
		}
		case Draw:
		{
			ctr.Draw();
			break;
		}
		case Delete:
		{
			ctr.DelCharactor();
			break;
		}
		case Edit:
		{
			ctr.EditCharactor();
			break;
		}
		case Save:
		{
			ctr.Save();
			break;
		}
		case Load:
		{
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
	}
	
	
}
