#include "worker.h"
#include"fstream"
#include<iostream>

#define FILENAME "empFile.txt"//文件名
#pragma once
using namespace std;


class WorkerManager
{
public:

	//构造函数
	WorkerManager();

	//析构函数
	~WorkerManager();

	void Show_Menu();

	void exitSystem();

	void add_emp();

	void save();

	int get_EmpNum();

	void init_Emp();

	void Show_Emp();

	void Del_Emp();

	int IsExist(int id);

	void Mod_Emp();

	void Find_Emp();

	void Sort_Emp();

	void Clean_File();
public:
	//职工总人数
	int m_EmpNum;
	//员工数组的指针
	Worker **m_EmpArray;
	//判断文件是否为空
	bool m_FileIsEmpty;
};