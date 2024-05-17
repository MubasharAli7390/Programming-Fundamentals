/*Write a program that uses loops to perform the following steps:
a) Prompt the user to input two integers: firstNum and secondNum(firstNum must be less than
secondNum).
b) Output all odd numbers between firstNum and secondNum.
c) Output the sum of all even numbers between firstNum and secondNum.*/
#include<iostream>
using namespace std;

int main() {
	int fn,sn,sum=0;
	cout<<"Enter first number: ";
	cin>>fn;
	cout<<"Enter second number: ";
	cin>>sn;
	if (fn < sn){
		cout<<"Odd Numbers:"<<endl;
		while(fn <= sn){
			if (fn % 2 != 0) {
				cout<<fn<<endl;
			} else if (fn % 2 == 0){
				sum += fn;
			}
			fn++;
		}
		cout<<"sum: "<<sum;
	} else {
		cout<<"INVALID INPUT";
	}
}
