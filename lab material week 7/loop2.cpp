#include <iostream>
using namespace std;
int main(){
	int n;
	do{
		cout<<"Enter a positive integer less than 50 : ";
		cin>>n;
		if(n>=50 || n<=0)
			cout<<"Please enter a valid number. "<<endl;	}
	while(n>=50 || n<=0);
	
	cout<<1;
	int counter=1;
	
	for(int i=4; ;i++)
		{if(counter>=n)
		break;
		if(i==5 || i==7)
			continue;
		if(i%2==0 || i%3==0 || i%5==0 || i%7==0)
			{
			cout<<", "<<i;
			counter++;
			}
		}
	
	
}
