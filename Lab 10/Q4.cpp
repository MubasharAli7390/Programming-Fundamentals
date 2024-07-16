//Write a program to calculate the sum of all elements in a single 2D-array.
#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int a[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    for(int i=0; i<= 2; i++){
        for(int j=0; j<=4; j++){
            sum += a[i][j];
        }
    }
    cout<<"Sum of all the elements is: "<<sum;
}