#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int num;
	do{
		cout<<"Enter a positive number to check whether it is positive or not : ";
		cin>>num;
		if (num <= 0) {
            cout << "Please enter a positive number!" << endl;
        }}
	while(num<=0);	
	
	bool prime=true;
	
	if(num==1)
		prime=false;
	else if(num==2)
		prime=true;
	else if(num%2==0)
		prime=false;
	else
		for(int i=3;i<=sqrt(num);i+=2){
			if(num%i==0)
				{
				prime=false;
				break;}
		}
	if(prime==1)
		cout<<num<<" is a prime number. "<<endl;
	else
		cout<<num<<" is not a prime number. "<<endl;
}
