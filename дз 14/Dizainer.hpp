//
//  Dizainer.hpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#pragma once
#include "Human.hpp"

class Dizainer : public Human
{
protected:
    char* companyName;
    char* programm;
    char* skills;

public:
    Dizainer();
    Dizainer(const char* n, int a, double zar, const char* companyN, const char* prog, const char* skillset);
    ~Dizainer();

    void Output();
    void Zarplata();

    void Input(const char* n, int a, double zar, const char* companyN, const char* prog, const char* skillset);
};
