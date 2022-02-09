//
// Created by 胡晨 on 2022/1/31.
//

#include "employee.h"

employee::employee(int id, string name, int dId) {
    this->m_id = id;
    this->name = name;
    this->m_DeptId = dId;
}

void employee::showInfo() {
    cout << "职工编号："<<this->m_id
            <<"\t职工姓名：" << this->name
            <<"\t岗位："<<this->getDeptName()
            <<"\t岗位职责：完成经理交给的任务"<<endl;
}

string employee::getDeptName() {
    return std::string("员工");
}
