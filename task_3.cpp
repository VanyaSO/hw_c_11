#include <iostream>
#include "functions.h"
using namespace std;

// Написати функцію, яка вставляє в рядок у вказану позицію заданий символ.

void insertCharByIndex(char* &string, int size, int userIndex, char newChar)
{
    int index = userIndex-1;

    // check index
    if(index < 0 || index > size-1)
    {
        cout << "Error: not found index";
        exit(0);
    }

    // create new sting
    char* newString = new char[size+2]; // +2 for new char and '\0'

    // init new array
    for (int i = 0, j = 0; i < size; ++i, ++j) {
        if (i == index) {
            newString[j] = newChar;
            ++j;
        }
        newString[j] = string[i];
    }

    newString[size+1] = '\0';

    delete[] string;
    string = newString;
}


int main()
{
    char* userString = getUserString();

    int index = 0;
    cout << "Enter the char number(not index) to add: " << endl;
    cin >> index;

    char newChar;
    cout << "Enter new char: " << endl;
    cin >> newChar;

    insertCharByIndex(userString, strlen(userString), index, newChar);

    delete[] userString;
    return 0;
}