//
// Created by admin on 02-02-2021.
//

#ifndef P2_STUDENT_H
#define P2_STUDENT_H

#include <iostream>

class student {
    int rollNo;
    int age;
    char name[20];
public:
    void setData()
    {
        std::cin >> name >> age >> rollNo;
    }void getData()
    {
        std::cout << name << std::endl << age << std::endl << rollNo;
    }
} std1, std2;

#endif //P2_STUDENT_H
