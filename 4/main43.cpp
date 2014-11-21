#include<iostream>

using namespace std;

int main(){
    int rows,colums;
    float mul;
    bool input = true;
    cout<<"input the number of rows: ";
    while(input){
        cin>>rows;
        if(rows<=20 && rows>0){
            input = false;
        }
    }
    input = true;
    cout<<"input the number of colums: ";
    while(input){
        cin>>colums;
        if(colums<=20 && colums>0){
            input = false;
        }
    }
    int mat[rows][colums];
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            cout<<"mat["<<i+1<<"]"<<"["<<j+1<<"]= ";
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"input the multiplyer: ";
    cin>>mul;
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            mat[i][j] = mat[i][j]*mul;
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
