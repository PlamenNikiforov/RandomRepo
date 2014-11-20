#include<iostream>

using namespace std;

int main(){
    int n,score[20],maxx=0,minn=0;
    cout<<"Vuvedete broq uchastnici"<<endl<<"n= ";
    cin>>n;
    cout<<"Vuvedete rezultatite:"<<endl;
    for(int i=0;i<n;++i){
        cout<<i<<" = ";
        cin>>score[i];
    }

    minn = score[0];
    maxx = score[0];
    for(int i=0;i<n;i++){
        if(score[i]>maxx){
            maxx = score[i];
        }
        if(score[i]<minn){
            minn = score[i];
        }
    }
    for(int i=0;i<n;i++){
        if(score[i] == maxx){
            cout<<i<<" - "<<maxx<<endl;
        }
        if(score[i] == minn){
            cout<<i<<" - "<<minn<<endl;
        }
    }

    return 0;
}