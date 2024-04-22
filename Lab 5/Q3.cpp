//Write a program that takes two integers and a char representing one of the following mathematical operations: +, -, /, or *. Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result. If an invalid operator is passed it should print “Error”.
#include<iostream>
using namespace std;

int main() {
    int a,b,result;
    char opr;
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;
    cout<<"Enter operator: ";
    cin>>opr;
    switch(opr) {
        case '+':
        cout<<"a + b = "<<a + b;
        break;
        case '-': 
        cout<<"a - b = "<<a - b;
        break;
        case '*':
        cout<<"a * b = "<<a * b;
        break;
        case '/':
        cout<<"a / b = "<<a / b;
        break;
        default:
        cout<<"Error";
        
    }
}