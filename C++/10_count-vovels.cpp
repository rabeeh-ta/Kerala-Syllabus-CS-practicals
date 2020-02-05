/*
    10. Input string into a character pointer and count the vowels in the string.
*/
#include <iostream>
using namespace std;
int main()
{
    char *str = new char();
    int count = 0;
    cout << "Enter a string : ";
    cin.getline(str, 100);
    for (int i = 0; *(str + i) != '\0'; i++)
    {
        switch (*(str + i))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
        }
    }
    cout << "No. of Vowels= " << count << "\n";
}