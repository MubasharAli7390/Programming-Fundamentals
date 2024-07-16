//Write a C++ program to display English Alphabets from A-Z using do-while loop.
#include <iostream>
using namespace std;

int main() {
   int a = 65;
   do {
       cout<<char(a)<<endl;
       a++;
   } while (a<=90);
}