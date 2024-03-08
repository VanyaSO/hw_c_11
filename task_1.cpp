#include <iostream>
#include "functions.h"
using namespace std;

// Написати функцію, яка видаляє з рядка символ із заданим номером.



void deleteChar(char* &string, int size, int index)
{
    // check index
    if(index < 0 || index > size)
    {
        cout << "Error: not found index";
        exit(0);
    }

    char* newString = new char[size];

    for (int i = 0, j = 0; string[i] != '\0'; ++i) {
        if(i != (index-1))
            newString[j++] = string[j];
    }

    newString[size-1] = '\0';

    delete[] string;
    string = newString;
}


int main()
{
    char* userString = getUserString();

    int index = 0;
    cout << "Enter the char number(not index) to delete: " << endl;
    cin >> index;

    deleteChar(userString, strlen(userString), index);
    delete[] userString;

    return 0;
}