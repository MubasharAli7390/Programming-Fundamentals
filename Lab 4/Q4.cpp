/*
C++  to calculate profit or loss using ladder if/else.
Logic to find profit or loss
In primary mathematics classes, you all have learned about profit and loss. If cost price is greater than selling price, then there is a loss otherwise profit.
Formula to calculate profit and loss
    • Profit = S.P - C.P (Where S.P is Selling Price and C.P is Cost Price)
    • Loss = C.P - S.P
*/

#include<iostream>
using namespace std;

    int main() {
        int c_p, s_p, profit, loss;
        cout<<"Enter cost price: ";
        cin>>c_p;
        cout<<"Enter selling price: ";
        cin>>s_p;
        profit = s_p - c_p;
        loss = c_p - s_p;
        if (profit > loss) {
            cout<<"You are making profit";
        }
        else if (loss > profit) {
            cout<<"You are in loss";
        }
    }