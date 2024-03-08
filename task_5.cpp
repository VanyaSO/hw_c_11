#include <iostream>
#include "functions.h"
using namespace std;

// Користувач вводить рядок символів і шуканий символ. Порахувати скільки разів він зустрічається в рядку.

int countingСharacters(char* &string, char searchValue)
{
    int counter = 0;
    int i = 0;
    while(string[i] != '\0') {
        if(string[i] == searchValue)
            counter++;
        i++;
    }

    return counter;
}


int main()
{
    char* userString = getUserString();
    char searchChar;
    cout << "Enter search char " << endl;
    cin >> searchChar;


    int amount = countingСharacters(userString, strlen(userString), searchChar);

    cout << amount;

    delete[] userString;
    return 0;
}