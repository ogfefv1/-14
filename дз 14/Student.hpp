//
//  Student.hpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#pragma once
#include "Human.hpp"

class Student : public Human  
{
    char* Univer;

public:
    Student();
    Student(const char* n, int a, double zar, const char* U);
    ~Student();

    void Output();
    void Zarplata();

    void Input(const char* n, int a, double zar, const char* U);
};
