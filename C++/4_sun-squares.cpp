/*
    Q. Find the sum of the squares of the first N natural numbers.
 */

#include <iostream>

using namespace std;

int main()
{
    int n, i, s = 0;
    cout << "Enter a limit \n";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        s = s + i * i;
    }
    cout << "Sum of the squares = " << s;
}
