//Write a program which takes 5 quizzes marks as input from the user. Calculate and display the average of these marks
#include <iostream>
using namespace std;
    int main() { 
        float q1,q2,q3,q4,q5,avg; 
        cout<<"Enter Marks of Quiz 1: ";
        cin>>q1; 
        cout<<"Enter Marks of Quiz 2: ";  
        cin>>q2;  
        cout<<"Enter Marks of Quiz 3: "; 
        cin>>q3; 
        cout<<"Enter Marks of Quiz 4: "; 
        cin>>q4; 
        cout<<"Enter Marks of Quiz 5: "; 
        cin>>q5; 
        avg = (q1 + q2 + q3 + q4+ q5) / 5; 
        cout<<"Average Marks Are: "<<avg;
    }