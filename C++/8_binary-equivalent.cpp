/*
    Q. Input an integer number and display its binary equivalent with the help of a userdefined function.
    
*/

#include <iostream>
using namespace std;

long binary(long dec)
{

    int sum = 0, rem, i = 1;

    do
    {

        rem = dec % 2;
        sum = sum + (i * rem);
        dec = dec / 2;
        i = i * 10;

    } while (dec > 0);
    return sum;
}

int main()
{
    int n, ans;
    cout << "Enter the Number to find the binary \n";
    cin >> n;
    ans = binary(n);
    cout << "The binary value is = " << ans << "\n";
}
