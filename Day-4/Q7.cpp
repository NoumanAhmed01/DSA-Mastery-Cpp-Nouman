/* Write a function that accepts a character (ch) as parameters & returns
the character that occurs after ch in the English alphabet.
Eg : input = ‘c’, return value = ‘d’
Note : for ch = ‘z’, return ‘a’.
*/

#include <iostream>
using namespace std;

char getNextChar(char ch)
{
    if (ch == 'z')
    {
        return 'a';
    }
    else
    {
        return ch + 1;
    }
}

int main()
{
    cout << getNextChar('n');
    return 0;
}