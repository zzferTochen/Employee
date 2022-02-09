//
// Created by 胡晨 on 2022/1/31.
//

#ifndef EMPLOYEE_EMPLOYEE_H
#define EMPLOYEE_EMPLOYEE_H

#include "Work.h"

//员工类
class employee : public Work{
public:
    employee(int id , string name , int dId);

    virtual void showInfo();

    virtual string getDeptName();
};


#endif //EMPLOYEE_EMPLOYEE_H
