/*
Write a program to check if two 2D-array are identical or not. Mention how many elements of array are same and how many are different. Also mentioned the indexes of different elements from 1st 2D-Array.
*/

#include<iostream>
using namespace std;

int main() {
    int identical=0,notIdentical=0;
    int a[2][3] = { 
        {1,2,3},
        {4,5,6}
    };
    int b[2][3] = {
        {1,2,4},
        {6,5,3}
    };
    for (int i=0; i<= 1; i++){
        for (int j=0; j<=2; j++){
            if (a[i][j] == b[i][j]){
                identical++;
            } else if (a[i][j] != b[i][j]){
                cout<<"index of different element: ";
                notIdentical++;
                cout<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
            }
        }
    }
    if (notIdentical == 0){
        cout<<"Arrays are identical"<<endl;
    } else if (notIdentical >= 1){
        cout<<"Arrays are Not Identical"<<endl;
    }
    cout<<"total identical elements: "<<identical<<endl;
    cout<<"total Non-identical elements: "<<notIdentical;
}