#include<iostream>

using namespace std;

int main(){
    int array[5],value=0,j;
    cout<<"Input values:"<<endl;
    for(int i=0;i<5;i++){
        cin>>array[i];
    }
    for(int i=0;i<4;i++){
        value=array[i];
            j=i-1;
            while(j>=0 && array[j]>value){
                array[j+1] = array[j];
                j--;
            }
        array[j+1] = value;
    }
    for(int i=0;i<5;i++){
        cout<<array[i];
    }

    return 0;
}
