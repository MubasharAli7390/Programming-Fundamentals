/* Write a program that prompts the user to enter the 10 numbers and tell how many of them are odd and
even.
Do program by loop or if else (nested).*/
#include<iostream>
using namespace std;

int main() {
	int a, i=1;
	while (i <= 10) {
		cout<<"Enter a number: ";
		cin>>a;
		if (a % 2 == 0){
			cout<<a<<" is even."<<endl;
		} else if (a % 2 !=  0) {
			cout<<a<<" is odd."<<endl;
		}
		i++;
	}
}
