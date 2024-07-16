// Write a program to calculate the arithmetic mean of 5 numbers stored in an array.
#include<iostream>
using namespace std;

int main(){
    int A[10] = {10,13,15,16,18,19,23,26,34,40};
    int sum = 0;
    int AP = 0;
    for (int i = 0; i <= 9; i++) {
        sum += A[i];
    }
    AP = sum/10;
    cout<<"Arithmetic Mean: "<<AP;
    
}