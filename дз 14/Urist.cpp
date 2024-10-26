//
//  Urist.cpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#include "Urist.hpp"
#include <iostream>
using namespace std;

Urist::Urist() : Human()
{
    cout << "конструктор юрист\n";
    company = nullptr;
    finishedUniversity = false;
}

Urist::Urist(const char* n, int a, double sal, const char* comp, bool finish)
    : Human(n, a, sal)
{
    cout << "конструктор юрист\n";

    company = new char[strlen(comp) + 1];
    strcpy(company, comp);
    finishedUniversity = finish;
}

Urist::~Urist()
{
    delete[] company;
    cout << "Деструктор юрист\n";
}

void Urist::Output()
{
    cout << "Вывод юрист\n";
    cout << "имя: " << name << endl;
    cout << "возраст: " << age << endl;
    cout << "зарплата: " << zarplata << endl;
    cout << "компания: " << company << endl;
    cout << "окончание универа: " << (finishedUniversity ? "Yes" : "No") << endl << endl;
}

void Urist::Zarplata()
{
    cout << "ЗП юриста: " << zarplata << endl;
}

void Urist::Input(const char* n, int a, double zar, const char* comp, bool finish)
{
    if (name != nullptr) delete[] name;
    if (company != nullptr) delete[] company;

    name = new char[strlen(n) + 1];
    strcpy(name, n);
    age = a;
    zarplata = zar;

    company = new char[strlen(comp) + 1];
    strcpy(company, comp);
    finishedUniversity = finish;
}
