//
// Created by 胡晨 on 2022/1/31.
//

#ifndef EMPLOYEE_MANAGER_H
#define EMPLOYEE_MANAGER_H


#include "Work.h"

//员工类
class manager : public Work{
public:
    manager(int id , string name , int dId);

    virtual void showInfo();

    virtual string getDeptName();
};


#endif //EMPLOYEE_MANAGER_H
