//Write a program to count even and odd numbers in an array.
#include<iostream>
using namespace std;

int main(){
    int A[20] = {2,40,30,54,67,3,2,67,35,25,4,355,326,753,7542,97,10149,329,495,7};
    int even = 0;
    int odd = 0;
    for (int i = 0; i<=19; i++) {
        if (A[i] % 2 == 0) {
            even += 1;
        } else if (A[i] % 2 != 0) {
            odd += 1;
        }
    }
    cout<<"Even Numbers: "<<even<<endl;
    cout<<"Odd Numbers: "<<odd;
}