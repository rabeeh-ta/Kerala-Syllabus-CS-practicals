/*
    Q. Find the sum of the digits of an integer number.
 */

#include <iostream>

using namespace std;

int main()
{
 int n, rem, s = 0;
 cout << "Enter a number. \n";
 cin >> n;

 while (n > 0) // condition, will terminate if n == 0
 {
  rem = n % 10;
  s = s + rem;
  n = n / 10;
 }
 cout << "\n Sum of the digits = " << s << "\n";
}
