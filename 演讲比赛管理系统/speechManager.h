#pragma once
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<fstream>
#include"speaker.h"
using namespace std;

class SpeechManager
{
public:
	SpeechManager();

	void show_Menu();//显示菜单

	void exitSystem();//退出

	void initSpeech();//初始化比赛

	void createSpeaker();//创建比赛人员

	void startSpeech();//开始比赛

	void speechDraw();//抽签

	void speechContest();//比赛

	void showScore();//显示晋级选手

	void saveRecord();//保存记录

	bool fileIsEmpty;//文件是否为空

	map<int, vector<string>>m_Record;//存放往届比赛记录

	void loadRecord();//获取记录

	void showRecord();//显示记录

	void clearRecord();//清空记录

	~SpeechManager();

	vector<int>v1;

	vector<int>v2;

	vector<int>vVictory;

	map<int, Speaker>m_Speaker;

	int m_Index;
};