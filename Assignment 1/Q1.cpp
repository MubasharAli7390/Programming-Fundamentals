/*
Prepare a C++ program that display the following output. The program should take one number from user using cin and cout the number in the form of triangle. For example a user enter 4 and a pattern of triangle is form by using 4.
           4
          44
         4444
        444444
       44444444
      44444444444
*/

#include<iostream>
using namespace std;

    int main() {
        int a;
        cout<<"Enter a number: ";
        cin>>a;
        cout<<"           "<<a<<endl;
        cout<<"          "<<a<<a<<endl;
        cout<<"         "<<a<<a<<a<<a<<endl;
        cout<<"        "<<a<<a<<a<<a<<a<<a<<endl;
        cout<<"       "<<a<<a<<a<<a<<a<<a<<a<<a<<endl;
        cout<<"      "<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<endl;
    }




