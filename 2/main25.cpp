#include<iostream>

using namespace std;

int main(){
	bool isPalindrom = true;
	int number,digitsCount=0,copy;
	cout<<"Input a number: ";
	cin>>number;
	copy=number;
	while(number > 0){
		number = number/10;
		digitsCount++;
	}
	int array[digitsCount];
	for (int i = 0; i < digitsCount; ++i)
	{
		array[i]=copy%10;
		copy = copy/10;
	}
	for (int i = 0; i < digitsCount/2; i++){
		digitsCount--;
		if (array[i] != array[digitsCount]){
				isPalindrom = false;
			}	
	}
	if (isPalindrom)
	{
		cout<<"Is palindrom"<<endl;
	}else{
		cout<<"Is not a palindrom"<<endl;
	}
	return 0;
}