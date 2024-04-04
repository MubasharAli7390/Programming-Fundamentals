//Write a Program to calculate and display the Height, Base, Area of the Right-angle Triangle
#include <iostream>
using namespace std; 

    int main() { 
        float area, base, height; 
        cout<<"Enter the base of triangle: "; 
        cin>>base; 
        cout<<"Enter the beight of triangle: "; 
        cin>>height; 
        area = 0.5 * (base * height); 
        cout<<"The Area of Triangle Is: "<<area; }