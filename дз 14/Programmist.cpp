//
//  Programmist.cpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#include "Programmist.hpp"
#include <iostream>
using namespace std;

Programmist::Programmist() : Human()
{
    cout << "конструктор программист\n";
    companyName = nullptr;
}

Programmist::Programmist(const char* n, int a, double zar, const char* companyN)
: Human(n, a, zar)
{
    cout << "конструктор программист\n";
    companyName = new char[strlen(companyN) + 1];
    strcpy(companyName, companyN);
}

Programmist::~Programmist()
{
    delete[] companyName;
    cout << "деструктор программист\n";
}

void Programmist::Output()
{
    cout << "вывод программист\n";
    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << endl;
    cout << "Зарплата: " << zarplata << endl;
    cout << "Название компании: " << companyName << endl;
}

void Programmist::Zarplata()
{
    cout << "ЗП программиста: " << zarplata << endl;
}

void Programmist::Input(const char* n, int a, double zar, const char* companyN)
{
    if (name != nullptr)
    {
        delete[] name;
    }
    if (companyName != nullptr)
    {
        delete[] companyName;
    }

    name = new char[strlen(n) + 1];
    strcpy(name, n);
    age = a;
    zarplata = zar;

    companyName = new char[strlen(companyN) + 1];
    strcpy(companyName, companyN);
}
