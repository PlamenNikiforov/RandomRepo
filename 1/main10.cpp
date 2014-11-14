#include<iostream>

using namespace std;

int main(){
    int myAge,currentAge,compareYears;
    cout<<"myAge= ";
    cin>>myAge;
    cout<<"currentAge= ";
    cin>>currentAge;
    cout<<"compareYears= ";
    cin>>compareYears;
    if(compareYears>100){
        cout<<"You dead Q_Q"<<endl;
    }else{
        myAge = currentAge+compareYears;
        cout<<"You will be "<<myAge<<" years old"<<endl;
    }
    return 0;
}
