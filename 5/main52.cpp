#include <iostream>

using namespace std;

bool foo(int n){
    bool stuff = false;
    if(n%2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num;
    bool boo;
    cout<<"Input number: ";
    cin>>num;
    boo = foo(num);
    cout<<boolalpha<<boo;
    return 0;
}
