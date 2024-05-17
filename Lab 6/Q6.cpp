//Write a C++ program to print all even numbers from 1 to n. using while loop. Value of n will be entered by the user.
#include<iostream>
using namespace std;

int main() {
    int n,i=2;
    cout<<"Enter a number: ";
    cin>>n;
    while (i <= n) {
        if (i % 2 == 0) {
            cout<<i<<endl;
        }
        i++;
    }
}
