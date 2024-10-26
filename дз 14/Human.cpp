//
//  Human.cpp
//  дз 14
//
//  Created by Егор Джемлиханов on 24.10.2024.
//

#include "Human.hpp"
#include<iostream>
using namespace std;

Human::Human()
{
    cout << "конструктор Human\n";
    name = nullptr;
    age = 0;
    zarplata = 0.0;
}

Human::Human(const char* Name, int Age, double Zarplata)
{
    cout << "конструктор Human\n";
    name = new char[strlen(Name) + 1];
    strcpy(name, Name);
    age = Age;
    zarplata = Zarplata;
}

void Human::Input()
{
    if (name != nullptr)
    {
        delete[] name;
    }

    char buff[20];
    cout << "Напишите имя -> ";
    cin >> buff;
    name = new char[strlen(buff) + 1];
    strcpy(name, buff);

    cout << "Напишите возраст -> ";
    cin >> age;

    cout << "Напишите зарплату -> ";
    cin >> zarplata;
}

Human::~Human()
{
    delete[] name;
    cout << "Деструктор Human\n";
}
