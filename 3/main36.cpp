#include<iostream>
#include<string>

using namespace std;

int main(){

    string word,reword;
    cout<<"Enter the word: ";
    cin>>word;
    
    for(int i=word.length();i>=0;--i){
        cout<<word[i];
    }
    cout<<endl;
}
