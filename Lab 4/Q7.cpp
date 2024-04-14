//Write a program to check the given integer is even or odd. Also, check whether it is divisible by 4 or not. Finally, check what will be its modulo (%) when divided by 3. Your program must print these three checks on the screen.

#include<iostream>
using namespace std;

    int main()
{
    int a, mod;
    cout<<"Enter an integer: ";
    cin>>a;
    if (a % 2 == 0) {
        cout<<"Integer is even\n";
    } else {
        cout<<"Integer is odd\n";
    }
    if (a % 4 == 0) {
        cout<<"Integer is multiple of 4\n";
    } else {
        cout<<"Integer is not multiple of 4\n";
    }
    mod = a % 3;
    cout<<"Integer % 3 = "<<mod;
}