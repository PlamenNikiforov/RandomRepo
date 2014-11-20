#include<iostream>

using namespace std;

int main(){
    char input;

    cout<<"Input a char"<<endl<<" char = ";
    cin>>input;
    if(input>= 'A' && input<= 'Z'){
        cout<<"Glavna bukva"<<endl;
    }
    if(input>='a' && input<='z'){
        cout<<"Malka bukva"<<endl;
    }
    if(input>='0' && input<='9'){
        cout<<"Chislo"<<endl;
    }


    return 0;
}