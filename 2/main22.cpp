#include<iostream>

using namespace std;

int main(){
    int number,counter=0;

    cout<<"input the number"<<endl<<"n= ";
    cin>>number;

    for(int i=1;i<number;i++){
        if(number%i==0){
            counter++;
        }
    }
    if(counter>1){
        cout<<"ne e prosto"<<endl;
    }else{
        cout<<"prosto";
    }


    return 0;

}