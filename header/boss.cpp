//
// Created by 胡晨 on 2022/1/31.
//

#include "boss.h"
boss::boss(int id, string name, int dId) {
    this->m_id = id;
    this->name = name;
    this->m_DeptId = dId;
}

void boss::showInfo() {
    cout << "职工编号："<<this->m_id
         <<"\t职工姓名：" << this->name
         <<"\t岗位："<<this->getDeptName()
         <<"\t岗位职责：管理公司所有事务"<<endl;
}

string boss::getDeptName() {
    return std::string("老板");
}
