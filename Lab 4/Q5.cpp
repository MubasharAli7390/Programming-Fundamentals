/*
Write a program to compute grade of student using if else adder. The grades are assigned as followed:
Marks<50 = F
50≤marks< 60 = C
60≤marks<70 = B
70≤marks<80 = B+
80≤marks<90 = A
90≤mars≤ 100 = A+
*/

#include<iostream>
using namespace std;

    int main() {
        int marks;
        string grade;
        cout<<"Enter your marks: ";
        cin>>marks;
        if (90 <=marks) {
            cout<<"grade = A+";
        }
        else if (80 <=marks && marks < 90) {
            cout<<"grade = A";
        }
        else if (70 <= marks && marks < 80) {
            cout<<"grade = B+";
        }
        else if (60 <= marks && marks < 70) {
            cout<<"grade = B";
        }
        else if (50 <= marks && marks < 60) {
            cout<<"grade = C";
        } 
        else if (marks < 50) {
            cout<<"grade = F";
        }

    }


