//write a c++ program to display all the even numbers uptill a certain number of terms and also d
#include <iostream>
using namespace std;

int main() {
   int a,i=2,sum=0;
   cout<<"Enter number of terms: ";
   cin>>a;
   do {
       cout<<i<<endl;
       sum += i;
       i += 2;
       a--;
   } while (a>0);
   cout<<"Sum: "<<sum;
}