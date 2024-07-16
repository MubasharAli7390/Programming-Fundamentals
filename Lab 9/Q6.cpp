//Write a C++ program to reverse an array.
#include<iostream>
using namespace std;

int main(){
    int ar_len,elem_ar;
    cout<<"Enter length of array: ";
    cin>>ar_len;
    int A[ar_len - 1];
    for (int i = 0; i <= ar_len - 1; i++) {
        cout<<"Enter Element of Array: ";
        cin>>A[i];
    }
   
   for (int i = ar_len - 1; i>=0; i--) {
    cout<<A[i]<<endl;
   }
}
