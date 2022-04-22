/*
change to uppercase
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string charToUpercase(char *word, int size)
{
    string result;
    int cInt;
    for (int i = 0; i <= size; i++)
    {
        // Typecast the char at that specific position to its ASCII value
        cInt = (int)word[i];
        // Compare if it's in lowercase
        if (cInt <= 122 && cInt >= 97)
        {
            // Change the value to UPPERCASE
            cInt = cInt - 32;
            // Adds each typecasted char value to string
            result += (char)cInt;
        }
        // else (if char is already an UPPERCASE)
        else
        {
            // Just added to string without changing its value
            result += (char)cInt;
        }
    }
    return result;
}
int main()
{
    char array[] = "ArGenTinA";
    int size = sizeof(array) - 1 / sizeof(array[0]);
    string result;
    result = charToUpercase(array, size);
    cout << result << endl;
    return 0;
}
