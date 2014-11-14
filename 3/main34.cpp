#include<iostream>

using namespace std;


int main(){
    bool decr = false,sorted=true;
    int array[5];
    cout<<"Enter the values";
    for(int i=0;i<5;i++){
        cin>>array[i];
    }
    if(array[0]<array[1]){
        decr = true;
    }
    if(decr){
        for(int i=0;i<4;i++){
            if(array[i]>array[i+1]){
                sorted = false;
                break;
            }
        }
    }else{
        for(int i=0;i<4;i++){
            if(array[i]<array[i+1]){
                sorted = false;
                break;
            }
        }

    }
    if(sorted){
        cout<<"Is sorted"<<endl;
    }else{
        cout<<"Is not sorted"<<endl;
    }
    return 0;
}
