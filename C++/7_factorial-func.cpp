/*
    Q. define a function find the factorial of a number using this function find the value of ncr.
*/

#include <iostream>
using namespace std;

int fact(int k)
{

    int f = 1, i;
    for (i = 1; i <= k; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    float n, r, ncr;
    cout << "Enter the N and R \n";
    cin >> n >> r;

    ncr = fact(n) / (fact(r) * fact(n - r));

    cout << "the nCr = " << ncr << "\n";
}
