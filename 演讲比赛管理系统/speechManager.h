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

	void show_Menu();//��ʾ�˵�

	void exitSystem();//�˳�

	void initSpeech();//��ʼ������

	void createSpeaker();//����������Ա

	void startSpeech();//��ʼ����

	void speechDraw();//��ǩ

	void speechContest();//����

	void showScore();//��ʾ����ѡ��

	void saveRecord();//�����¼

	bool fileIsEmpty;//�ļ��Ƿ�Ϊ��

	map<int, vector<string>>m_Record;//������������¼

	void loadRecord();//��ȡ��¼

	void showRecord();//��ʾ��¼

	void clearRecord();//��ռ�¼

	~SpeechManager();

	vector<int>v1;

	vector<int>v2;

	vector<int>vVictory;

	map<int, Speaker>m_Speaker;

	int m_Index;
};