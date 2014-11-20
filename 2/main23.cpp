#include<iostream>

using namespace std;

int main(){
    int number,digit;
    bool input=true;
    while(input){
        cout<<"Input the number"<<endl<<"n = ";
        cin>>number;
        if((number/10000 == 0) && (number/1000 != 0)){
            input = false;
        }
    }
    while(number != 0){
        digit = number%10;
        number = number/10;
        cout<<digit<<endl;
    }
    return 0;
}