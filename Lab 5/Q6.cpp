/*
Write a menu-driven program to convert a given number of days into: (use switch)
Years
Months
Hours
Minutes
Seconds
*/
#include<iostream>
using namespace std;

int main() {
    int day,n;
    float result;
    cout<<"Enter the number of days: ";
    cin>>day;
    cout<<"Convert to:\n";
    cout<<"1. Years\n";
    cout<<"2. Months\n";
    cout<<"3. Hours\n";
    cout<<"4. Minutes\n";
    cout<<"5. Seconds\n";
    cin>>n;
    switch(n) {
        case 1: 
        cout<<"Years: "<<day / 365;
        break;
        case 2: 
        cout<<"Months: "<<day / 30.417;
        break;
        case 3: 
        cout<<"Hours: "<<day * 24;
        break;
        case 4: 
        cout<<"Minutes: "<<day * 1440;
        break;
        case 5:
        cout<<"seconds: "<<day * 86400;
        break;
        default:
        cout<<"Invalid Input";
    }
}