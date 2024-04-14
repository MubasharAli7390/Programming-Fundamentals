//Write a program to find the largest number among five numbers using nested if else statement in C++.

#include<iostream>
using namespace std;

    int main()
{
    int a,b,c,d,e;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    cout<<"Enter fourth number: ";
    cin>>d;
    cout<<"Enter fifth number: ";
    cin>>e;
    if (a > b && a > c && a > d && a > e) {
        cout<<"first number is the largest";
    } else if (b > a && b > c && b > d && b > e) {
        cout<<"second number is the largest";
    } else if (c > a && c > b && c > d && c > e) {
        cout<<"third number is the largest";
    } else if (d > a && d > b && d > c && d > e) {
        cout<<"fourth number is the largest";
    } else if (e > a && e > b && e > c && e > d) {
        cout<<"fifth number is the largest";
    }
} 
