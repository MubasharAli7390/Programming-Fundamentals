//Write a program to check if the given number is divisible by 3 or not. If it is divisible by 3 then also check divisibility by 4. Use nested if.
#include<iostream>
using namespace std;

    int main() {
        int number;
        cout<<"Enter a number: ";
        cin>>number;
        if (number % 3 == 0) {
            if (number % 4 == 0) {
                cout<<"Number is divisible by both 3 and 4";
            }
            else {
            cout<<"number is not divisible by 4";
        }
        }
        else {
            cout<<"number is not divisible by 3";
        }
    }