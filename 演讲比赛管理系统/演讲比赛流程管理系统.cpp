#include<iostream>
#include<ctime>
#include"speechManager.h"
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	SpeechManager sm;
	int chioc = 0;
	while (true)
	{
		sm.show_Menu();
		cin >> chioc;
		switch (chioc)
		{
		case 1://开始比赛
			sm.startSpeech();
			break;
		case 2://查看往届比赛记录
			sm.showRecord();
			break;
		case 3://清空比赛记录
			sm.clearRecord();
			break;
		case 0://退出系统
			sm.exitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}