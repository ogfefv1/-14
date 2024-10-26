//
//  Direktor.cpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#include "Direktor.hpp"
#include <iostream>
using namespace std;

Direktor::Direktor() : Human()
{
    cout << "Конструктор директор\n";
    Firm = nullptr;
}

Direktor::Direktor(const char* n, int a, double sal, const char* companyN)
    : Human(n, a, sal)
{
    cout << "Конструктор директор\n";

    Firm = new char[strlen(companyN) + 1];
    strcpy(Firm, companyN);
}

Direktor::~Direktor()
{
    delete[] Firm;
    cout << "Деструктор директор\n";
}

void Direktor::Output()
{
    cout << "вывод директор\n";
    cout << "имя: " << name << endl;
    cout << "возраст: " << age << endl;
    cout << "зарплата: " << zarplata << endl;
    cout << "фирма: " << Firm << endl << endl;
}

void Direktor::Zarplata()
{
    cout << "ЗП директора: " << zarplata << endl;
}

void Direktor::Input(const char* n, int a, double zar, const char* companyN)
{
    if (name != nullptr) delete[] name;
    if (Firm != nullptr) delete[] Firm;

    name = new char[strlen(n) + 1];
    strcpy(name, n);
    age = a;
    zarplata = zar;

    Firm = new char[strlen(companyN) + 1];
    strcpy(Firm, companyN);
}
