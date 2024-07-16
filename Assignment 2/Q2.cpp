//Write a program in C++ to display the n terms of even number and their sum.
#include <iostream>
using namespace std;

int main() {
   int a,i=1;
   cout<<"Enter a number: ";
   cin>>a;
   do {
       cout<<a<<" X "<<i<<" = "<<a*i<<endl;
       i++;
   } while (i<=10);
}