#include "Ingredient.h"

int main()
{
    priority_queue<Ingredient> queue;

    int choice;
    do
    {
        Menu();
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name;
            int time;
            cout << "Enter name of ingredient: ";
            cin >> name;
            cout << "Enter time of cooking(seconds): ";
            cin >> time;

            queue.push(Ingredient(name, time));
            cout << "Ingredient added successfully!\n";
            break;
        }
        case 2:
        {
            if (queue.empty())
            {
                cout << "No ingredients to cook.\n";
            }

            else
            {
                Ingredient next = queue.top();
                queue.pop();
                cout << "Cooking " << next.name <<
                    " (Time: " << next.cookingTime << " seconds)... Done!\n";
            }
            break;
        }
        case 0:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Error!\n";
        }
    } while (choice != 0);
}