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


int main(){
    int num;
    bool foo;
    cout<<"Input a number: ";
    cin>>num;
    foo = prosto(num);
    cout<<boolalpha<<foo;
    return 0;
}
