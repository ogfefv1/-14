//
//  Prepodavatel.hpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#pragma once
#include "Human.hpp"

class Prepodavatel : public Human
{
protected:
    char* Univer;
    char* Subject;

public:
    Prepodavatel();
    Prepodavatel(const char* n, int a, double _zarplata, const char* _univer, const char* _subject);
    ~Prepodavatel();

    void Output();
    void Zarplata();

    void Input(const char* n, int a, double _zarplata, const char* _univer, const char* _subject);
};
