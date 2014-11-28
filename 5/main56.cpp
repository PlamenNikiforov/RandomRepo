#include <iostream>

using namespace std;

int delitel(int a, int b){
    int copy;
    if(a>b){
        while(b != 0){
            copy=a;
            a= b;
            b=copy%b;
        }
        return copy/2;
    }else{
        if(b>a){
            while(a != 0){
                copy = b;
                b= a;
                a= copy%a;
            }
        }
        return copy/2;
    }
}


int main(){
    int a,b;
    cout<<"Input a number: ";
    cin>>a;
    cout<<"Input again: ";
    cin>>b;

    a = delitel(a,b);
    cout<<a<<endl;

    return 0;
}


