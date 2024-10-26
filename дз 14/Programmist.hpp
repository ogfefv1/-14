//
//  Programmist.hpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#pragma once
#include "Human.hpp"

class Programmist : public Human
{
protected:
    char* companyName;

public:
    Programmist();
    Programmist(const char* n, int a, double zar, const char* companyN);
    ~Programmist();

    void Output();
    void Zarplata();

    void Input(const char* n, int a, double zar, const char* companyN);
};
