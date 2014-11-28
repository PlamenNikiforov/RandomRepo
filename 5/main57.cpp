#include<iostream>

using namespace std;

int foo(int a, int b){
    int sum = 0;
    while(a!=0){
        if(a%10 == b){
            sum++;
        }
        a = a/10;
    }
    return sum;
}

int main(){
    int a,b;
    bool input = true;
    while(input){
        cout<<"Input a number: ";
        cin>>a;
        if(a>9){
            input = false;
        }
    }
    while(!input){
    cout<<"Input a digit: ";
        cin>>b;
        if(b>0 && b<10){
            input = true;
        }
    }
    a = foo(a,b);
    cout<<a<<endl;


    return 0;
}
