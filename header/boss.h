//
// Created by 胡晨 on 2022/1/31.
//

#ifndef EMPLOYEE_BOSS_H
#define EMPLOYEE_BOSS_H


#include "Work.h"

//员工类
class boss : public Work{
public:
    boss(int id , string name , int dId);

    virtual void showInfo();

    virtual string getDeptName();
};

#endif //EMPLOYEE_BOSS_H
