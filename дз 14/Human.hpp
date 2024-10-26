//
//  Human.hpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#pragma once
class Human  // base class
{
protected:
    char* name;
    int age;
    double zarplata;

public:
    Human();
    Human(const char*, int, double);
    virtual void Output() = 0;
    virtual void Zarplata() = 0;
    void Input();

    virtual ~Human() = 0;
};
