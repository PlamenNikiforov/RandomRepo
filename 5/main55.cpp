#include<iostream>

using namespace std;

char foo(int n){
    int sum=64;
    char c;
    while(n!=0){
        sum += n%10;
        n=n/10;
    }
    c=sum;
    return c;
}

int main(){
    char c;
    bool input= true;
    int n;
    while(input){
        cout<<"Input number: ";
        cin>>n;
        if(n>999 && n<=9999){
            input = false;
        }
    }
    c = foo(n);
    cout<<c<<endl;
    return 0;
}
