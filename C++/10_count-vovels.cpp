/*
    10. Input string into a character pointer and count the vowels in the string.
*/
#include <iostream>
using namespace std;

int main()
{
	char *str = new char();
    int count = 0;
    cout << "Input the string to find the vowels \n";
    cin.getline(str,100);

    for (int i = 0;*(str + i) != '\0'; i++)
    {
        switch (*(str + i))
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'I':
        case 'i':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            count++;
        }
    }
    cout << "There are " << count << " vowels \n";
}
