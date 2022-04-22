/*
Program that get as argument a char and return its value depending on the case.
In this scenario used to converts a symbolic char to its value of the Linux File Permissions
 */
#include <iostream>
using namespace std;

int charToOctNum(char symbolic)
{
    int octalNum;
    switch (symbolic)
    {
    case 'r':
        octalNum = 4;
        break;
    case 'w':
        octalNum = 2;
        break;
    case 'x':
        octalNum = 1;
        break;
    case '-':
        octalNum = 0;
        break;

    default:
        octalNum = 0;
        break;
    }
    return octalNum;
}

int main()
{
    char symbolic1 = 'r';
    int octResult;
    octResult = charToOctNum(symbolic1);
    cout << octResult << endl; // Returns 4
    return 0;
}
