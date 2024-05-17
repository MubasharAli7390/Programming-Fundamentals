//Develop a C++ program using While loop to repeatedly ask the user for a number and print its square until the user enters a negative number.
#include<iostream>
using namespace std;

int main() { 
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    while (a >= 0) {
        cout<<"square: "<<a*a;
        cout<<"\n";
        cout<<"Enter a number: ";
        cin>>a;
    }
cout<<"You entered a negative number";
}