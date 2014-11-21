#include <iostream>

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
    int A[20][20];
    int B[20][20];
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            cout<<"A["<<i+1<<"]"<<"["<<j+1<<"]= ";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<colums;j++){
            B[i][j]=A[j][i];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;i<colums;j++){
            cout<<B[i][j];
        }
        cout<<endl;
    }

    return 0;
}
