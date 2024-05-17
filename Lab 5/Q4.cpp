//Write a menu-driven C++ program to find the area of the circle, area of the triangle and area of the rectangle according to the user’s input choice.
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"******Menu*******\n";
    cout<<"1. Area of Circle\n";
    cout<<"2 .Area of Triangle\n";
    cout<<"3. Area of Rectangle\n";
    cout<<"4. Exit\n";
    cout<<"************************\n";
    cin>>n;
    switch (n) {
    case 1:
      int r, a;
      cout << "Enter Radius: ";
      cin >> r;
      a = 3.14 * r * r;
      cout << "Area: " << a << endl;
      break;
    case 2:
      int b, h, t;
      cout << "Enter base: ";
      cin >> b;
      cout << "Enter height: ";
      cin >> h;
      t = 0.5 * (b * h);
      cout << "Area: " << t << endl;
      break;
    case 3:
      int l, w, ar;
      cout << "Enter length: ";
      cin >> l;
      cout << "Enter width: ";
      cin >> w;
      ar = l * w;
      cout << "Area: " << ar << endl;
      break;
    case 4:
      cout << "Goodbye!" << endl;
      break;
    default:
      cout << "Invalid Input" << endl;
  }
  return 0;
}



