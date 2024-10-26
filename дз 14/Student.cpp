//
//  Student.cpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#include "Student.hpp"
#include <iostream>
using namespace std;

Student::Student() : Human()
{
    cout << "Конструкторов студент\n";
    Univer = nullptr;
}

Student::Student(const char* n, int a, double zar, const char* U)
: Human(n, a, zar)
{
    cout << "Конструктор студент\n";
    Univer = new char[strlen(U) + 1];
    strcpy(Univer, U);
}

Student::~Student()
{
    delete[] Univer;
    cout << "Деструктор студент\n";
}

void Student::Output()
{
    cout << "Вывод студент\n";
    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << endl;
    cout << "Зарплата: " << zarplata << endl;
    cout << "Универ: " << Univer << endl << endl;
}

void Student::Zarplata()
{
    cout << "Студенческая стипендия: " << zarplata << endl;
}

void Student::Input(const char* n, int a, double zar, const char* U)
{
    if (name != nullptr) delete[] name;
    if (Univer != nullptr) delete[] Univer;

    name = new char[strlen(n) + 1];
    strcpy(name, n);
    age = a;
    zarplata = zar;

    Univer = new char[strlen(U) + 1];
    strcpy(Univer, U);
}
