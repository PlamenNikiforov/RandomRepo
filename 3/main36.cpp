#include<iostream>

using namespace std;

int main(){
    int size=5;
    char array[size];
    char arrayRev[size];
    cout<<"Input values";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    for(int j=0;j<5;j++){
        arrayRev[j]=array[size];
        size--;
    }
    for(int i=0;i<5;i++){
        cout<<arrayRev[i]<<endl;
    }
}
