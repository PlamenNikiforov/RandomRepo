#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int number,digit,n;
    bool input=true;
    for(int i=1;i<6;i++){
        cout<<i<<"- digit number"<<endl;
    }
    while(input){
        cout<<"Input the number of digits"<<endl<<"n= ";
        cin>>n;
        if((n>0) && (n<6)){
            input = false;
        }
    }
    input = true;
    while(input){
        cout<<"Input the number"<<endl<<"number= ";
        cin>>number;
        
        if(((number/(int)pow(10, n)) == 0) && ((number/(int)pow(10, n-1))!= 0)){
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