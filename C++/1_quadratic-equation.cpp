/*
    Q. Input any three coefficients of a quadratic equation and find its roots.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float a, b, c, desc, r1, r2;

    cout << "Enter the three co efficient \n";
    cin >> a >> b >> c;

    desc = b * b - 4 * a * c;

    if (a == 0)
    {
        cout << "\n Infinite coefficients \n";
    }
    else if (desc == 0)
    {
        r1 = -b / 2 * a;
        cout << "\n the roots are same = " << r1;
    }
    else if (desc > 0)
    {
        r1 = (-b + sqrt(desc)) / (2 * a);
        r2 = (-b - sqrt(desc)) / (2 * a);
        cout << "\n root 1 = " << r1 << "\n";
        cout << "\n root 2 = " << r2 << "\n";
    }
    else
    {
        cout << "\n the roots are imaginary.";
    }
}
