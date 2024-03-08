#include <iostream>
#include "functions.h"
using namespace std;

// Написати функцію, яка видаляє з рядка всі входження в нього заданого символу

void deleteAllFindChars(char* &string, int size, int symbol)
{
    // сount the number of elements that we will remove
    int counterDeleteChars = 0;
    int i = 0;
    while(string[i] != '\0') {
        if(string[i] == symbol)
            counterDeleteChars++;
        i++;
    }

    // check amount found elements
    if(counterDeleteChars == 0)
    {
        cout << "Error: elements not found";
        exit(0);
    }

    // create new size
    int newSize = size - counterDeleteChars;
    char* newString = new char[newSize];

    // init new array
    for (int i = 0, j = 0; string[i] != '\0'; ++i) {
        if(string[i] != symbol)
            newString[j++] = string[i];
    }

    // add end string
    newString[size-1] = '\0';

    delete[] string;
    string = newString;
}


int main()
{
    char* userString = getUserString();

    char symbol;
    cout << "Enter character to delete: " << endl;
    cin >> symbol;


    deleteAllFindChars(userString, strlen(userString), symbol);
    delete[] userString;

    return 0;
}