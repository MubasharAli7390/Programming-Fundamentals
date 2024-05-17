//Write a C++ program that uses a while loop to calculate the factorial of a given positive integer.
//Hint: factorial of 5 is 120 (5 x 4 x 3 x 2 x 1 = 120)
#include<iostream>
using namespace std;

int main() {
    int a,i,f=1;
    cout<<"Enter a number: ";
    cin>>a;
    i = a;
    while(i >= 1) {
        f = f * i;
        i--;
    }
    cout<<"factorial of "<<a<<" is "<<f;


}