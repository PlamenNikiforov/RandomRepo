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
    int A[rows][colums];
    int B[rows][colums];
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            cout<<"A["<<i+1<<"]"<<"["<<j+1<<"]= ";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            cout<<"B["<<i+1<<"]"<<"["<<j+1<<"]= ";
            cin>>B[i][j];
        }
    }
    int C[rows][colums];
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"C=A+B = "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
