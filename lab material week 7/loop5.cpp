#include<iostream>
using namespace std;
int main(){
	int num;
	do{
		cout<<"Enter a postive number within 10 to 20 :";
		cin>>num;
		
		if(num>20 || num<10)
		cout<<"Invalid number! Reenter again!"<<endl;
	}while(num>20 || num<10);
	
	int po=0,ne=0,temp;
	
	for(int i=1;i<=num;i++)
		{cout<<"Enter a number :";
		 cin>>temp;
		 
		if(temp>0)
			po++;
			
		else if(temp<0)
			ne++;
		}
	cout<<"Number of positive number = "<<po<<endl;
	cout<<"Number of negative number = "<<ne<<endl;
	
	return 0;
	
}
