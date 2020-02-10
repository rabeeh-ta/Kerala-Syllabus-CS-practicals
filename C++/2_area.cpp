/*
   Q. Find the Area of a rectangle, circle and a triangle use the switch statement for selecting an option from a menu
 */

#include <iostream>
using namespace std;

int main()
{
  int ch;
  float l, w, r, h, b, ans;

  cout << "1 - Find the area of Recangle \n";
  cout << "2 - Find the area of Circle \n";
  cout << "3 - Find the area of Triangle \n";
  cout << "Enter your choice \n";
  cin >> ch;

  switch (ch)
  {
  case 1:
    cout << "Enter Length and Width \n";
    cin >> l >> w;
    ans = l * w;
    cout << "the area is = " << ans;
  case 2:
    cout << "Enter Radius \n";
    cin >> r;
    ans = 3.14 * r * r;
    cout << "the area is = " << ans;
  case 3:
    cout << "Enter Breadth and Height \n";
    cin >> b >> h;
    ans = b * h;
    cout << "the area is = " << ans;
  default:
    cout << "\n invalid input \n";
  }
}