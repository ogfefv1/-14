//
//  Urist.hpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#pragma once
#include "Human.hpp"

class Urist : public Human
{
protected:
    char* company;
    bool finishedUniversity;

public:
    Urist();
    Urist(const char* n, int a, double zar, const char* comp, bool finish);
    ~Urist();

    void Output();
    void Zarplata();

    void Input(const char* n, int a, double zar, const char* comp, bool finish);
};
