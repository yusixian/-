#pragma once
#ifndef _STUDENT_
#define _STUDENT_
#include <cstring>
#include <cstdio>
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Menus.h"
using namespace std;
extern Menus m;
class Operate;
class Student {
	friend class Operate;
	char name[15];		  //����
	char Class[15];		  //�༶
	char stuNum[15];		  //ѧ��
	double examGrade[3];  //��������Ӣ��c���Գɼ�
	double givenMark[3];  //ͬѧ�����֡�����Ա���֡���������ʦ����
	double avrGrade, multiGrade;   //����ƽ���ɼ����۲��ܷ�
	int examRank, multiGradeRank;  //�����ܷ��������۲��ܷ�����
public:
	void InputInfor();//����ѧ����Ϣ
	void display();//չʾ��Ϣ ��չʾ�ؼ���Ϣ
	void PrintDetail();	 //չʾ��ϸ��Ϣ
	void Change();//�޸���Ϣ��ѧ�Ų����޸�
	void Change_Name();//�޸�����
	void Change_Class();//�޸İ༶
	void Change_Grade();//�޸ĳɼ�
	bool operator<(Student & s);//����С�ںţ���ѧ������
};
#endif
