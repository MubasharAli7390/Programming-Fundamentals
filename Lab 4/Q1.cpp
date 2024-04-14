//Write a program that prompts the user to input of two integers, compare them and find the larger and lesser number.

#include<iostream>
using namespace std;

    int main() {
        int a, b;
        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        if (a > b) {
            cout<<"greater: "<<a<<endl;
            cout<<"lesser: "<<b;
        }
        else {
            cout<<"greater: "<<b<<endl;
            cout<<"lesser: "<<a;
        }
    }