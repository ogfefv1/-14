//
//  Direktor.hpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#pragma once
#include "Human.hpp"

class Direktor : public Human
{
protected:
    char* Firm;
public:
    Direktor();
    Direktor(const char* n, int a, double zar, const char* companyN);
    ~Direktor();

    void Output();
    void Zarplata();

    void Input(const char* n, int a, double zar, const char* companyN);
};
