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
		case 1://��ʼ����
			sm.startSpeech();
			break;
		case 2://�鿴���������¼
			sm.showRecord();
			break;
		case 3://��ձ�����¼
			sm.clearRecord();
			break;
		case 0://�˳�ϵͳ
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