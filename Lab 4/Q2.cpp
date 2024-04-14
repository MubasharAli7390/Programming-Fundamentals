//Write a program that takes a number from the user and tells what is the equivalent month of this entered number e.g. if the user enters 6 then system should display it is JUNE.

#include<iostream>
using namespace std;

    int main() {
        int number;
        cout<<"Enter a number: ";
        cin>>number;
        if (number == 1) {
            cout<<"It is January";
        }
        else if (number == 2) {
            cout<<"It is Feburary";
        }
        else if (number == 3) {
            cout<<"It is March";
        }
        else if (number == 4) {
            cout<<"It is April";
        }
        else if (number == 5) {
            cout<<"It is May";
        }
        else  if (number == 6) {
            cout<<"It is June";
        }
        else  if (number == 7) {
            cout<<"It is July";
        }
        else  if (number == 8) {
            cout<<"It is August";
        }
        else  if (number == 9) {
            cout<<"It is September";
        }
        else  if (number == 10) {
            cout<<"It is October";
        }
        else  if (number == 11) {
            cout<<"It is November";
        }
        else  if (number == 12) {
            cout<<"It is December";
        }
        else {
            cout<<"Wrong Input";
        }


    }