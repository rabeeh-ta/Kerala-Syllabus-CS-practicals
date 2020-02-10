/*
    Q. Find the sum of the squares of the first N natural numbers.
 */

#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;

    cout << "Enter the number to find the sum of digits of int. \n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }

    cout << "\n The sum of digits is = " << sum << "\n";
}
