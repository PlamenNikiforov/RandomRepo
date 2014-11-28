#include <iostream>

using namespace std;

int fact(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum = sum*i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"input n= ";
    cin>>n;
    n = fact(n);
    cout<<n<<endl;
    return 0;
}

