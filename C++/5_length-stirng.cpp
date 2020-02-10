/*
    Q. Find the length of the string without using strlen() function.
 */

#include <iostream>
using namespace std;

int main()
{
    char name[100];
    int count = 0;

    cout << "Enter the string to be counted. \n";
    cin.getline(name, 100);

    while (name[count] != '\0')
    {

        count++;
    }

    cout << "the total number of = " << count << "\n";
}
