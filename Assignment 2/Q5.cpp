#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 4;i++){
        if (i == 1 || i == 4){
            cout<<"*****"<<endl;
        } else if (i == 2 || i == 3){
            cout<<"*   *"<<endl;
        }
    }
}