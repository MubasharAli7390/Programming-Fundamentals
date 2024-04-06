/*
Prepare a C++ program to display the following menu of a restaurant. Firstly display the menu of the restaurant and then ask the customer about his/her name, order and also display his/her bill. 
*/

#include<iostream>
using namespace std;

    int main() {
        string c_name, c_order;
        int c_bill = 0;
        cout<<"*************************************************************************************\n";
        cout<<"*************************************************************************************\n";
        cout<<"                            WELCOME TO OUR RESTAURANT                                \n";
        cout<<"*************************************************************************************\n";
        cout<<"*************************************************************************************\n";
        cout<<"                                    Our Menu                                         \n";
        cout<<"                           ***************************                               \n";
        cout<<"                           1.Biryani           Rs.300                                \n";
        cout<<"                           2.Chicken Karahi    Rs.250                                \n";
        cout<<"                           3.Chai              Rs.100                                \n";
        cout<<"                           4.Coffee            Rs.170                                \n";
        cout<<"                           3.Zinger Burger     Rs.250                                \n";
        cout<<"                           3.Shawarma          Rs.200                                \n";
        cout<<"                           ***************************                               \n";
        cout<<"                                  Customer Order                                     \n";
        cout<<"                           ***************************                               \n";
        cout<<"                              Customer name: ";
        cin>>c_name;
        cout<<"                              Customer order: ";
        cin>>c_order;
        if (c_order == "Biryani"){
            c_bill += 300;
        }
        else if (c_order == "Chicken Karahi")
        {
            c_bill += 300;
        }
        else if (c_order == "Chai")
        {
            c_bill += 100;
        }
        else if (c_order == "Coffee")
        {
            c_bill += 170;
        }
        else if (c_order == "Zinger Burger")
        {
            c_bill += 250;
        }
        else if (c_order == "Shawarma")
        {
            c_bill += 200;
        }
        cout<<"                              Customer bill: ";
        cout<<c_bill<<endl;
        cout<<"                           ***************************                               \n";
        cout<<"                                    Thank You                                        \n";


    } 