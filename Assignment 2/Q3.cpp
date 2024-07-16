//write a c++ program to display the multiplication table of a given number 
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