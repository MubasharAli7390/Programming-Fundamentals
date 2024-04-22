//Write a program to find if an integer is positive, negative or zero
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter an Integer: "; 
    cin>>a;
    if (a > 0) {
        cout<<"The Integer is Positive";
    } else if (a < 0) {
        cout<<"The Integer is Negative";
    } else {
        cout<<"The Integer is Zero";
    }

}