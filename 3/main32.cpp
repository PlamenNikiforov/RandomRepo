#include<iostream>

using namespace std;

int main(){
    int friendsCount;
    cout<<"How many friends do you have?";
    cin>>friendsCount;
    cout<<"Enter the age of your "<<friendsCount<<" friends"<<endl;
    int ages[friendsCount];
    for(int i=0;i<friendsCount;i++){
        cin>>ages[i];
    }
    int min=ages[0],max=ages[0];
    for(int i=0;i<friendsCount;i++){
        if(ages[i]>max){
            max = ages[i];
        }else{
            if(ages[i]<min){
                min = ages[i];
            }
        }
    }
    cout<<min<<endl<<max;



    return 0;
}
