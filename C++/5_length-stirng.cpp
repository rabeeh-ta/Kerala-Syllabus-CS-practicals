/*
    Q. Find the length of the string without using strlen() function.
 */

#include <iostream>
#include <cstring> // wrong library

using namespace std;

int main()
{
    char strg[100];
    int count = 0;
    cin >> getline(strg, 100);

    while (strg[count] != "\0")
    {
        count++;
    }
    cout << "\n The length of the Sting is = " << count;
}
