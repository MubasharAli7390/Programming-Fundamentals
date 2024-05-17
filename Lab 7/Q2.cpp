//Write a program that uses for loop to output the numbers and their squares between 1 and 10.
#include<iostream>
using namespace std;

int main() {
	int a = 1;
	while (a <= 10) {
		cout<<"Number: "<<a<<" Square: "<<a*a<<endl;
		a++;
	}
}

