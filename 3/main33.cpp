#include<iostream>

using namespace std;

int main(){
    int grades[5];
    float gpa=0;
    cout<<"Enter your grades:";
    for(int i=0;i<5;i++){
        cin>>grades[i];
    }
    for(int i=0;i<5;i++){
        gpa += grades[i];
    }
    gpa = gpa/5;

    cout<<gpa;

    return 0;
}
