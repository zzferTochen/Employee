//
// Created by 胡晨 on 2022/1/31.
//

#ifndef EMPLOYEE_WORKMANAGER_H
#define EMPLOYEE_WORKMANAGER_H
#pragma once
#include<iostream>
#include "Work.h"
#include <fstream>

#define FILENAME "empFile.txt"

using namespace std;

class workManager
{
public:
    //标志文件是否为空
    bool m_fileIsEmpty;

    //构建函数
    workManager();

    //显示菜单
    void show_menu();

    //记录职工人数
    int m_empNum;

    //职工类数组
    Work** m_empArray;

    //添加职工
    void add_emp();

    //保存文件
    void save();

    int get_EmpNum();

    void init_Emp();

    void show_emp();
    //退出程序
    void exitSystem();

    //析构函数
    ~workManager();
};
#endif //EMPLOYEE_WORKMANAGER_H
