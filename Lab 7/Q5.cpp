/*Write a program to ask the user to enter a positive integer. Use a do-while loop to repeatedly ask for input
until a valid positive integer is provided.*/
#include<iostream>
using namespace std;

int main(){
	int a;
	do {
		cout<<"Enter a positive integer: ";
		cin>>a;
	} while(a <=0 );
	cout<<a<<" is a positive integer";
}
