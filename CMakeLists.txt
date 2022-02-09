cmake_minimum_required(VERSION 3.20)
project(Employee)

set(CMAKE_CXX_STANDARD 14)

add_executable(Employee main.cpp header/workManager.h header/workManager.cpp header/Work.cpp header/Work.h header/employee.cpp header/employee.h header/manager.cpp header/manager.h header/boss.cpp header/boss.h)
