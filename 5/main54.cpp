#include<iostream>

using namespace std;

char foo(char c){
    if((int)c>64 && (int)c<91){
        c += 32;
        return c;
    }else{
        if((int)c>96 && (int)c<123){
            c -=32;
            return c;
        }
    }
}

int main(){
    char res;
    cout<<"Vuvedi bukva: ";
    cin>>res;
    res = foo(res);
    cout<<res;
    return 0;
}
