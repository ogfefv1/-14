//
//  Dizainer.cpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#include "Dizainer.hpp"
#include <iostream>
using namespace std;

Dizainer::Dizainer() : Human()
{
    cout << "Конструктор дизайнер\n";
    companyName = nullptr;
    programm = nullptr;
    skills = nullptr;
}

Dizainer::Dizainer(const char* n, int a, double sal, const char* companyN, const char* prog, const char* skillset)
    : Human(n, a, sal)
{
    cout << "Конструктор дизайнер\n";

    companyName = new char[strlen(companyN) + 1];
    strcpy(companyName, companyN);

    programm = new char[strlen(prog) + 1];
    strcpy(programm, prog);

    skills = new char[strlen(skillset) + 1];
    strcpy(skills, skillset);
}

Dizainer::~Dizainer()
{
    delete[] companyName;
    delete[] programm;
    delete[] skills;
    cout << "Деструктор дизайнер\n";
}

void Dizainer::Output()
{
    cout << "Вывод дизайнер\n";
    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << endl;
    cout << "Зарплата: " << zarplata << endl;
    cout << "Название компании: " << companyName << endl;
    cout << "Используемая программа: " << programm << endl;
    cout << "Скилы: " << skills << endl;
}

void Dizainer::Zarplata()
{
    cout << "ЗП дизайнера: " << zarplata << endl;
}

void Dizainer::Input(const char* n, int a, double zar, const char* companyN, const char* prog, const char* skillset)
{
    if (name != nullptr) delete[] name;
    if (companyName != nullptr) delete[] companyName;
    if (programm != nullptr) delete[] programm;
    if (skills != nullptr) delete[] skills;

    name = new char[strlen(n) + 1];
    strcpy(name, n);
    age = a;
    zarplata = zar;

    companyName = new char[strlen(companyN) + 1];
    strcpy(companyName, companyN);

    programm = new char[strlen(prog) + 1];
    strcpy(programm, prog);

    skills = new char[strlen(skillset) + 1];
    strcpy(skills, skillset);
}
