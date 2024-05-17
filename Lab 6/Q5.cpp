//Write a C++ program to print all alphabets from a to z using while loop.
#include<iostream>
using namespace std;

int main() {
    int a=97;
    char b;
    while(b<=121) {
    b = char(a);
    cout<<b<<endl;
    a++;
    }    
}