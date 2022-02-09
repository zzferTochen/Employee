//
// Created by 胡晨 on 2022/1/31.
//

#ifndef EMPLOYEE_WORK_H
#define EMPLOYEE_WORK_H
#pragma once
#include<iostream>
#include<string>
using namespace std;

//职工抽象类
class Work {
public:
    Work();
    virtual void showInfo() = 0; //显示个人信息
    virtual string getDeptName() = 0; //获取岗位信息

    int m_id; //职工编号
    string name; //职工姓名
    int m_DeptId; // 职工所在单位名称编号

    virtual ~Work();
};


#endif //EMPLOYEE_WORK_H
