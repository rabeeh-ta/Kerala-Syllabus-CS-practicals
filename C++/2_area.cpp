/*
   Q. Find the Area of a rectangle, circle and a triangle use the switch statement for selecting an option from a menu
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int ch, l, w, r, b, h; // l = length w = width and you get the point.
  float area;

  cout << "1 - Find the area of a Rectangle. \n";
  cout << "2 - Find the area of a Circle. \n";
  cout << "3 - Find the area of a triangle. \n";
  cout << "Enter the number corresponding to your choice. \n";
  cin >> ch; // here we get the choice in number.

  switch (ch)
  {

  case 1:
    cout << "\n Enter the length and width of the rectangle. \n";
    cin >> l >> w;
    area = l * w;
    cout << "\n Area of rectangle = " << area << "\n";
    break;

  case 2:
    cout << "\n Enter the Radius of the circle. \n";
    cin >> r;
    area = 3.14 * r * r;
    cout << "\n Area of circle = " << area << "\n";
    break;

  case 3:
    cout << "\n Enter the base-length and height of the triangle. \n";
    cin >> b >> h;
    area = 0.5 * b * h;
    cout << "\n Area of triangle = " << area << "\n";
    break;

  default:
    cout << "\n Invalid choice."; // if the ch is more than 3 or 0.
    break;
  }
}
