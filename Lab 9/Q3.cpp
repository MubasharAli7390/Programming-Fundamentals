//Write a program to calculate the sum and product of values stored in an array. You have to take input from the user, then display the stored values, and finally print the sum and product.
#include<iostream>
using namespace std;

int main(){
    int A[5],sum=0,average=0;
    cout<<"Enter the marks of English: ";
    cin>>A[0];
    cout<<"Enter the marks of Programming: ";
    cin>>A[1];
    cout<<"Enter the marks of Calculus: ";
    cin>>A[2];
    cout<<"Enter the marks of Computing: ";
    cin>>A[3];
    cout<<"Enter the marks of Electronics: ";
    cin>>A[4];
    for (int i = 0; i <= 4; i++){
        sum += A[i];
    }
    cout<<"Your average score is: "<<sum/4;

}