#include<iostream>

using namespace std;

int main(){
    int rows,colums;
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
            if(i==j){
                cout<<mat[i][j];
            }
        }
    }
    return 0;
}
