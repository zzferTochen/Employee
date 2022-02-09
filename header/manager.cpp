//
// Created by 胡晨 on 2022/1/31.
//

#include "manager.h"

manager::manager(int id, string name, int dId) {
    this->m_id = id;
    this->name = name;
    this->m_DeptId = dId;
}

void manager::showInfo() {
    cout << "职工编号："<<this->m_id
         <<"\t职工姓名：" << this->name
         <<"\t岗位："<<this->getDeptName()
         <<"\t岗位职责：完成老板交给的任务,并下发任务给员工"<<endl;
}

string manager::getDeptName() {
    return std::string("经理");
}
