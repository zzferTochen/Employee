#include <iostream>
#include "header/workManager.h"
#include "header/Work.h"
#include "header/boss.h"
#include "header/manager.h"
#include "header/employee.h"
using namespace std;
void test(){
    Work * worker = NULL;
    worker = new employee(1, "张三", 1);
    worker->showInfo();
    delete worker;

    worker = new manager(2, "李四", 2);
    worker->showInfo();
    delete worker;

    worker = new boss(3, "王五", 3);
    worker->showInfo();
    delete worker;
}

int main() {
    workManager workManager;
    workManager.show_menu();
    int choice = 0;
    while(true){
        cout<<  "请输入您的选择："<<endl;
        cin >> choice;
        switch (choice) {
            case 0: //退出系统
                workManager.exitSystem();
                break;
            case 1: //添加职工
                workManager.add_emp();
                break;
            case 2: //显示职工
                break;
            case 3: //删除职工
                break;
            default:
                //system("cls");
                break;
        }
        return 0;
    }
    //test();
}

