//Write a program to input five numbers from user and check the number are divisible by 3 then print the message on the screen that “the number is divisible by three”. Otherwise print “The number is not divisible by three”.

#include<iostream>
using namespace std;

    int main() {
        int a,b,c,d,e;
        cout<<"Enter first number(a): ";
        cin>>a;
        cout<<"Enter second number(b): ";
        cin>>b;
        cout<<"Enter third number(c): ";
        cin>>c;
        cout<<"Enter fourth number(d): ";
        cin>>d;
        cout<<"Enter fifth number(e): ";
        cin>>e;
        if (a % 3 == 0) {
            cout<<"a: The number is divisible by three\n";
        } else {
            cout<<"a: The number is not divisible by three\n";
        }
        if (b % 3 == 0) {
            cout<<"b: The number is divisible by three\n";
        } else {
            cout<<"b: The number is not divisible by three\n";
        }
        if (c % 3 == 0) {
            cout<<"c: The number is divisible by three\n";
        } else {
            cout<<"c: The number is not divisible by three\n";
        }
        if (d % 3 == 0) {
            cout<<"d: The number is divisible by three\n";
        } else {
            cout<<"d: The number is not divisible by three\n";
        }
        if (e % 3 == 0) {
            cout<<"e: The number is divisible by three\n";
        } else {
            cout<<"e: The number is not divisible by three";
        }

    }
