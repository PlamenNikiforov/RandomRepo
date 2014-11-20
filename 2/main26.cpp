#include<iostream>

using namespace std;

int main(){
    int number,array[8],counter=0;
    for (int i = 0; i < 8; ++i)
    {
        array[i]=0;
    }
    cout<<"Input the number"<<endl<<"number= ";
    cin>>number;
    while(number!=0){
        if (number%2 == 0)
        {
           array[counter] = 0;
        }else{
            array[counter] = 1;
        }
        number = number/2;
        counter++;
    }
    for(int i=7;i>=0;--i){
        cout<<array[i];
    }
    cout<<endl;
    return 0;
}