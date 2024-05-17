/* Write a C++ program that asks the user to enter a password. Use a do-while loop to repeatedly prompt for
the password until a correct password is entered. */
#include<iostream>
using namespace std;

int main(){
	int correct_password,user_password;
	correct_password = 8701;
	do {
		cout<<"Enter password: ";
	 	cin>> user_password;
	} while(user_password != correct_password);
	cout<<"Correct Password";
	
}


