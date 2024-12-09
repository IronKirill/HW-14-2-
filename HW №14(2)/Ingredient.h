#pragma once
#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Ingredient
{
public:
    string name;
    int cookingTime;

    Ingredient(string name, int time) : name(name), cookingTime(time) {}

    bool operator < (const Ingredient& right) const
    {
        return this->cookingTime < right.cookingTime;
    }
};

void Menu()
{
    cout << "Enter what you want to do:\n";
    cout << "1 - Add ingredient\n";
    cout << "2 - Cook a dish\n";
    cout << "0 - Exit\n";
    cout << "Your choice: ";
}