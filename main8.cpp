#include<iostream>

using namespace std;

int main(){
    double price, tax;
    int c;
    cout<<"Enter price: ";
    cin>>price;
    cout<<"Times you buyin': ";
    cin>>c;
    tax = (price*c)*0.2;
    cout<<"You're paying "<<tax<<endl;

    return 0;
}

