#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a1,a2,b1,b2;
    double dist;
    cout<<"a1= ";
    cin>>a1;
    cout<<"a2= ";
    cin>>a2;
    cout<<"b1= ";
    cin>>b1;
    cout<<"b2= ";
    cin>>b2;
    if(a1>b1){
       a1=a1-b1;
    }else{
        a1=b1-a1;
    }
    if(a2>b2){
        a2=a2-b2;
    }else{
        a2=b2-a2;
    }
    dist = sqrt(pow(a1,2)+pow(a2,2));
    cout<<"distance= "<<dist<<endl;
    return 0;
}
