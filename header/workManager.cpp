//
// Created by 胡晨 on 2022/1/31.
//
#include "workManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

workManager::workManager() {
    ifstream ifs;
    ifs.open(FILENAME,ios::in);

    //文件不存在的情况
    if(!ifs.is_open()){
        //初始化属性
        cout<<"文件不存在"<<endl;
        this->m_empNum = 0;
        this->m_fileIsEmpty = true;
        this->m_empArray = nullptr;
        ifs.close();
        return;
    }

    //文件存在的情况,并且没有记录
    char ch;
    ifs >> ch;
    if(ifs.eof()){
        cout<<"文件为空！；"<<endl;
        this->m_empNum = 0;
        this->m_fileIsEmpty = true;
        this->m_empArray = nullptr;
        ifs.close();
        return;
    }


}

workManager::~workManager() {
    if(this->m_empArray!= nullptr){
        delete[] this->m_empArray;
    }
}

void workManager::show_menu() {
    cout << "********************************************" << endl;
    cout << "*********  欢迎使用职工管理系统！ **********" << endl;
    cout << "*************  0.退出管理程序  *************" << endl;
    cout << "*************  1.增加职工信息  *************" << endl;
    cout << "*************  2.显示职工信息  *************" << endl;
    cout << "*************  3.删除离职职工  *************" << endl;
    cout << "*************  4.修改职工信息  *************" << endl;
    cout << "*************  5.查找职工信息  *************" << endl;
    cout << "*************  6.按照编号排序  *************" << endl;
    cout << "*************  7.清空所有文档  *************" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}

void workManager::exitSystem() {
    cout << "欢迎下次使用"<<endl;
    //system("pause");
    exit(0);
}

void workManager::add_emp() {
    cout<< " please input the number you want to add:"<<endl;
    int num =0;
    cin>>num;
    if(num >0){
        //计算新空间的大小
        int newSize = this->m_empNum + num;
        Work ** newSpace  = new Work*[newSize];

        //将原来空间里面的数据移动到新空间下面
        if(this->m_empArray!= nullptr){
            for (int i = 0; i < this->m_empNum; ++i) {
                newSpace[i] = this->m_empArray[i];
            }
        }
        //添加新数据
        for (int i = 0; i < num; ++i) {
            int id;
            string name;
            int dSelect;

            cout<<"请输入第"<<i+1<<"个员工的编号";
            cin >> id;
            cout<<"请输入第"<<i+1<<"个员工的姓名";
            cin >> name;
            cout<<"请输入第"<<i+1<<"个员工的岗位";
            cout<<"1、普通职工";
            cout<<"2、经理";
            cout<<"3、老板";
            cin >> dSelect;

            //将输入的数据添加到数组中
            Work * work = nullptr;
            switch (dSelect) {
                case 1:
                    work = new employee(id,name,dSelect);
                    break;
                case 2:
                    work = new manager(id,name,dSelect);
                    break;
                case 3:
                    work = new boss(id,name,dSelect);
                    break;
                default:
                    break;
            }
            newSpace[this->m_empNum+i] = work;
        }

        delete[] this->m_empArray;
        this->m_empArray = newSpace;
        this->m_empNum = newSize;
        this->m_fileIsEmpty = false;
        cout<<"成功添加"<<num<<"名员工"<<endl;

        this->save();

    }else{
        cout << " something is wrong,please check your input."<<endl;
    }
}

void workManager::save() {
    ofstream ofs;

    ofs.open(FILENAME,ios::out);

    for (int i = 0; i < this->m_empNum; ++i) {
        ofs << this->m_empArray[i]->m_id<<" "
            << this->m_empArray[i]->name<<" "
            << this->m_empArray[i]->m_DeptId << endl;
    }

    ofs.close();

}

