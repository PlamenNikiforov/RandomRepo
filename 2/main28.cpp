#include<iostream>

using namespace std;

int main(){
	bool input = true;
	int number,roll;
	char symbol;
	cout<<"Input a number between 2 and 100"<<endl;
	while(input){
		cout<<"number= ";
		cin>>number;
		if (number>=2 && number<=100)
		{
			input = false;
		}
	}
	cout<<"Input a symbol"<<endl<<"symbol: ";
	cin>>symbol;
	roll = number + number-1;
	for (int i = 0; i < number; ++i)
	{
		cout<<symbol;
		cout<<" ";
	}
	cout<<endl;
	for (int i = 0; i < number-1; ++i)
	{
		for (int j = 0; j < roll; ++j)
		{
			if (j-i == 1 || i+j == roll-2)
			{
				cout<<symbol;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}


	return 0;
}