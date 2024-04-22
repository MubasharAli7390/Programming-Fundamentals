//Write a program to check whether a character entered by the user is a vowel or not.  Use the switch case statement.
#include<iostream>
using namespace std;

int main() {
    char chart;
    cout<<"Enter a character: ";
    cin>>chart;
    switch(chart) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'O':
        case 'o':
        case 'u':
        case 'U':
        cout<<"It is a vowel";
        break;
        default:
        cout<<"It is a consonent";


    }
}