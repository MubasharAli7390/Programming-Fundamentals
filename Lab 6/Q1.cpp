//Write a program to display the multiplication table of a given integer by user using while loop.
#include<iostream>
using namespace std;

int main() {
    int a,n,i = 1;
    cout<<"Enter a number: ";
    cin>>n;
    while(i <= 10) {
        cout<<endl;
        a = n * i;
        cout<<n<<" "<<"X"<<" "<<i<<" "<<"="<<" "<<a;
        i++;
    }

}