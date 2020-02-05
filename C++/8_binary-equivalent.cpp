/*
    Q. Input an integer number and display its binary equivalent with the help of a userdefined function.
    
*/

#include <iostream>
using namespace std;
long binary(long dec)
{
    long rem, i = 1, sum = 0;
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
    long d, ans;
    cout << "Enter the decimal to be converted:";
    cin >> d;
    ans = binary(d);
    cout << "The binary of the given number is:" << ans << "\n";
}