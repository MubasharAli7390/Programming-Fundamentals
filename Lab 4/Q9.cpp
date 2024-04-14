//Write a program that prompts the user to input three numbers. The program should then output the numbers in ascending and descending order. Use if statements only.

#include<iostream>
using namespace std;

    int main() {
        int a,b,c,num1,num2,num3;
        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        cout<<"Enter third number: ";
        cin>>c;
        if (a > b && a > c) {
            num1 = a;
        } 
        if (b > a && b > c) {
            num1 = b; 
        }
        if (c > a && c > b) {
            num1 = c;
        }
        if (num1 == a && b > c) {
            num2 = b;
            num3 = c;
        }
        if (num1 == a && c > b) {
            num2 = c;
            num2 = b;
        }
        if (num1 == b && a > c) {
            num2 = a;
            num3 = c;
        }
        if (num1 == b && c > a) {
            num2 = c;
            num3 = a;
        }
        if (num1 == c && b > a) {
            num2 = b;
            num3 = a;
        }
        if (num1 == c && a > b) {
            num2 = a;
            num3 = b;
        }
    cout<<"Ascending Order:\n";
    cout<<num3<<endl;
    cout<<num2<<endl;
    cout<<num1<<endl;
    cout<<"Descending Order:\n";
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    
    }
    