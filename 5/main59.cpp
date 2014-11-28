#include<iostream>

using namespace std;

void draw(char symbol, int number){
    int roll = number + number-1;
    for (int i = 0; i < number; ++i){
        cout<<symbol;
        cout<<" ";
    }
        cout<<endl;
    for (int i = 0; i < number-1; ++i){
        for (int j = 0; j < roll; ++j){
            if (j-i == 1 || i+j == roll-2){
                cout<<symbol;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int number;
    char c;
    bool input = true;
    while(input){
        cout<<"input a number between 2 and 100: ";
        cin>>number;
        if(number>1 && number<101){
            input = false;
        }
    }
    cout<<"input a char: ";
    cin>>c;
    draw(c,number);
    return 0;
}
