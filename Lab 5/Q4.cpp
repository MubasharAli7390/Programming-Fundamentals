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
    switch(n) {
        case 1:
        float r,circle;
        cout<<"Enter Radius: ";
        cin>>r;
        circle = 3.14*r*r;
        cout<<"Radius of the circle: "<<circle;
        break;
        case 2:
        float base, height, triangle;
        cout<<"Enter base: ";
        cin>>base;
        cout<<"Enter height: ";
        cin>>height;
        triangle = 0.5*(base*height);
        cout<<"Area of the triangle: "<<triangle;
        break;
        case 3:
        float length,breath,rectangle;
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter breath: ";
        cin>>breath;
        rectangle = length*breath;
        cout<<"Area of the rectangle: "<<rectangle;
        break;
        case 4: 
        cout<<"Goodbye!";
        break;
        default:
        cout<<"Wrong Input";
        

    }

}

