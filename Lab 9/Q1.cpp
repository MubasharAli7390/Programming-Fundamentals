//Write a program to check the largest value stored in the given array:
//Also, write a program to check for the smallest value. 
#include<iostream>
using namespace std;

int main() {
int a[7] = {23,1,13,4,34,67,15};
if (a[0] > a[1] && a[0] > a[2] && a[0] > a[3] && a[0] > a[4] && a[0] > a[5] && a[0] > a[6]) {
        cout<<"first element is the largest"<<endl;
    } else if (a[1] > a[0] && a[1] > a[2] && a[1] > a[3] && a[1] > a[4] && a[1] > a[5] && a[1] > a[6]) {
        cout<<"second element is the largest"<<endl;
    } else if (a[2] > a[0] && a[2] > a[3] && a[2] > a[3] && a[2] > a[4] && a[2] > a[5] && a[2] > a[6]) {
        cout<<"third element is the largest"<<endl;
    } else if (a[3] > a[0] && a[3] > a[1] && a[3] > a[2] && a[3] > a[4] && a[3] > a[5] && a[3] > a[6]) {
        cout<<"fourth element is the largest"<<endl;
    } else if (a[4] > a[0] && a[4] > a[1] && a[4] > a[2] && a[4] > a[5] && a[4] > a[5] && a[4] > a[6]) {
        cout<<"fifth element is the largest"<<endl;
    } else if (a[5] > a[0] && a[5] > a[1] && a[5] > a[2] && a[5] > a[3] && a[5] > a[4] && a[5] > a[6]) { 
         cout<<"sixth element is the largest"<<endl;
    } else if (a[6] > a[0] && a[6] > a[1] && a[6] > a[2] && a[6] > a[3] && a[6] > a[4] && a[6] > a[5]) { 
         cout<<"seventh element  is the largest"<<endl;
    }
    if (a[0] < a[1] && a[0] < a[2] && a[0] < a[3] && a[0] < a[4] && a[0] < a[5] && a[0] < a[6]) {
         cout<<"first element is the smallest";
    } else if (a[1] < a[0] && a[1] < a[2] && a[1] < a[3] && a[1] < a[4] && a[1] < a[5] && a[1] < a[6]) {
        cout<<"second element is the smallest";
    } else if (a[2] < a[0] && a[2] < a[3] && a[2] < a[3] && a[2] < a[4] && a[2] < a[5] && a[2] < a[6]) {
        cout<<"third element is the smallest";
    } else if (a[3] < a[0] && a[3] < a[1] && a[3] < a[2] && a[3] < a[4] && a[3] < a[5] && a[3] < a[6]) {
        cout<<"fourth element is the smallest";
    } else if (a[4] < a[0] && a[4] < a[1] && a[4] < a[2] && a[4] < a[5] && a[4] < a[5] && a[4] < a[6]) {
        cout<<"fifth element is the smallest";
    } else if (a[5] < a[0] && a[5] < a[1] && a[5] < a[2] && a[5] < a[3] && a[5] < a[4] && a[5] < a[6]) { 
         cout<<"sixth element is the smallest";
    } else if (a[6] < a[0] && a[6] < a[1] && a[6] < a[2] && a[6] < a[3] && a[6] < a[4] && a[6] < a[5]) { 
         cout<<"seventh element the smallest";

}
}

