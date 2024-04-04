/*
Write a C++ program to print the following:

Expected Output
--------------------------------------
|                               2+3  |
|                               =5   |
--------------------------------------
| [7]  [8]  [9]  ||     [+]    [-]   |
| [4]  [5]  [6]  ||     [x]    [/]   |
| [1]  [2]  [3]  ||  [Compute]       |
| [A] [0]  [B]  ||  [ Clear]         |
--------------------------------------
In the displayed figure, integer values are inserted by the user and calculate that values sum.
*/

#include <iostream> 
using namespace std;

    int main() { 
        int a, b, sum; 
        cout << "Value of A: "; 
        cin >> a; cout<<"Value of B: "; 
        cin >> b; 
        sum = a + b; 
        cout<<"--------------------------------------\n";
        cout<<"|                             ";
        cout<<a;
        cout<<"+";
        cout<<b;
        cout<<"  |\n";
        cout<<"|                              ";
        cout<<"=";
        cout<<sum;
        cout<<"   |\n";
        cout<<"--------------------------------------\n";
        cout<<"| [7]  [8]  [9]  ||     [+]    [-]   |\n";
        cout<<"| [4]  [5]  [6]  ||     [x]    [/]   |\n";
        cout<<"| [1]  [2]  [3]  ||  [Compute]       |\n";
        cout<<"| [A] [0]  [B]  ||  [ Clear]         |\n";
        cout<<"--------------------------------------\n";
        
    }