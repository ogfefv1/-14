//
//  main.cpp
//  дз 14
//
//  Created by Егор Джемлиханов on 23.10.2024.
//

#include "Student.hpp"
#include "Programmist.hpp"
#include <iostream>
using namespace std;

int main()
{
    Human* people[2];

    people[0] = new Student("Кира", 19, 3000, "НКИ");

    people[1] = new Student("Никита", 21, 3000, "МГУ");

    for (int i = 0; i < 2; ++i)
    {
        people[i]->Output();
        people[i]->Zarplata();
        cout << endl;
    }

    for (int i = 0; i < 2; ++i)
    {
        delete people[i];
    }

    return 0;
}
