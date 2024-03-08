#include <iostream>
#include "functions.h"
using namespace std;

// Написати програму, яка замінює всі символи крапки "." у рядку, введеному користувачем, на символи знака оклику "!".

void changeChars(char* &string, int size)
{
    // create new sting
    char* newString = new char[size+1]; // +2 for new char and '\0'

    // init new array
    for (int i = 0; i < size; ++i) {
        if(string[i] == '.')
            newString[i] = '!';
        else
            newString[i] = string[i] ;
    }

    newString[size] = '\0';

    delete[] string;
    string = newString;
}


int main()
{
    char* userString = getUserString();

    changeChars(userString, strlen(userString));

    cout << userString;

    delete[] userString;
    return 0;
}