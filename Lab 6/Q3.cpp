//Write a C++ program using a While loop to generate the Fibonacci sequence up to the first 20 terms.
// Hint: Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones.
#include<iostream>
using namespace std;

int main() { 
    int n=20,a=0,b=1,i=2,m=0;
cout<<a<<endl;
cout<<b<<endl;
while(i <= n) {
  m =a + b;
  cout<<m<<endl;
  a = b;
  b = m;
  i++;
}
}

