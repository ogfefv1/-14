//
//  Prepodavatel.cpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#include "Prepodavatel.hpp"            
#include <iostream>
using namespace std;

Prepodavatel::Prepodavatel() : Human()
{
    cout << "конструктор преподаватель\n";
    Univer = nullptr;
    Subject = nullptr;
}

Prepodavatel::Prepodavatel(const char* n, int a, double _zarplata, const char* _univer, const char* _subject)
    : Human(n, a, _zarplata)
{
    cout << "конструктор преподаватель\n";

    Univer = new char[strlen(_univer) + 1];
    strcpy(Univer, _univer);

    Subject = new char[strlen(_subject) + 1];
    strcpy(Subject, _subject);
}

Prepodavatel::~Prepodavatel()
{
    delete[] Univer;
    delete[] Subject;
    cout << "деструктор преподаватель\n";
}

void Prepodavatel::Output()
{
    cout << "Вывод преподаватель\n";
    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << endl;
    cout << "Зарплата: " << zarplata << endl;
    cout << "Универ: " << Univer << endl;
    cout << "Предмет: " << Subject << endl << endl;
}

void Prepodavatel::Zarplata()
{
    cout << "ЗП преподавателя: " << zarplata << endl;
}

void Prepodavatel::Input(const char* n, int a, double _zarplata, const char* _univer, const char* _subject)
{
    if (name != nullptr) delete[] name;
    if (Univer != nullptr) delete[] Univer;
    if (Subject != nullptr) delete[] Subject;

    name = new char[strlen(n) + 1];
    strcpy(name, n);
    age = a;
    zarplata = _zarplata;

    Univer = new char[strlen(_univer) + 1];
    strcpy(Univer, _univer);

    Subject = new char[strlen(_subject) + 1];
    strcpy(Subject, _subject);
}
