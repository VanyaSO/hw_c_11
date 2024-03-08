#include <iostream>
#include "functions.h"
using namespace std;

// Користувач вводить рядок. Визначити кількість літер, кількість цифр і кількість інших символів, присутніх у рядку.

void countingСharacters(char* &string, int &countN, int& countS, int& countL)
{
    for (int i = 0; string[i] != '\0' ; ++i) {
        int asciiNum = static_cast<int>(string[i]);

        if(asciiNum >= 48 && asciiNum <= 57)
            countN+=1;
        else if(asciiNum >= 65 && asciiNum <= 90 || asciiNum >= 97 && asciiNum <= 122)
            countL+=1;
        else
            countS+=1;
    }
}


int main()
{
    char* userString = getUserString();
    int amountNum = 0, amountSymb = 0, amountLet = 0;

    countingСharacters(userString, amountNum, amountSymb, amountLet);

    delete[] userString;

    return 0;
}