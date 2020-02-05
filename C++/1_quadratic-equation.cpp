/*
    Q. Input any three coefficients of a quadratic equation and find its roots.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 float a, b, c, desc, r1, r2;
 cout << "Enter three coefficients2 \n";
 cin >> a >> b >> c;
 desc = b * b - 4 * a * c;
 if (a == 0) // checking if the input is valid or not
 {
  cout << "\n Invalid input";
 }
 else
 {
  if (desc == 0) // cheching if both has equal roots
  {
   r1 = b / (2 * a);
   cout << "\n Equal roots = " << r2 << "\n";
  }
  else if (desc > 0) //
  {
   r1 = (-b + sqrt(desc)) / (2 * a);
   r1 = (-b + sqrt(desc)) / (2 * a); // make sure the equation is correct.
   cout << "\n Root 1 = " << r1 << "\t Root 2 = " << r2 << "\n";
  }
  else // imaginary roots
  {
   cout << "\n Roots are imaginary \n";
  }
 }
}
