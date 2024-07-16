#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i <=4; i++){
        for(int j = i; j >= 0; j--){
            cout<<" ";
        }
        if (i == 1 ||i == 2 ||i == 3) {
            cout<<"*                *"<<endl;
        } else {
            cout<<"******************"<<endl;
        }
    }
}