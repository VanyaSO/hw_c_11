#include <iostream>
#include <string>
using namespace std;

bool checkLen(char* string)
{
    if(strlen(string) > 0) return true;

    cout << "Error: string empty" << endl;
    return false;
}

char* getUserString()
{
    const int size = 255;
    char* userString = new char[size];

    while(true)
    {
        cout << "Enter text: " << endl;
        cin.getline(userString, size-1);

        if(checkLen(userString))
            return userString;
    }
}