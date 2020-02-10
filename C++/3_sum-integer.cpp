/*
    Q. Find the sum of the digits of an integer number.
 */

#include <iostream>
using namespace std;

int main()
{

    int rem, sum = 0, n;

    cout << "Enter the number to be added \n";
    cin >> n;

    while (n > 0)
    {

        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    cout << "The sum is = " << sum << "\n";
}
