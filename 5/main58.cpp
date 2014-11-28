#include<iostream>

using namespace std;

bool prosto(int n){
    int counter=0;
    for(int i=2;i<n/2;i++){
        if(n%i == 0){
            counter++;
        }
    }
    if(counter != 0){
        return false;
    }else{
        return true;
    }
}

bool foo(int a, int b){
    bool asdf;
    int sum = 0;
    while(a!=0){
        if(a%10 == b){
            sum++;
        }
        a = a/10;
    }
    asdf = prosto(sum);
    return asdf;
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
    input = foo(a,b);
    cout<<boolalpha<<input<<endl;


    return 0;
}
