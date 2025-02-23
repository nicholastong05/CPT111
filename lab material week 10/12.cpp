#include <iostream>
using namespace std;

bool isPrime(int);

int main(){
	int num;
	
	cout<<"Enter a number for prime checking :";
	cin>>num;
	
	bool result=isPrime(num);
	
	if(result==1)
		cout<<"It is a prime number "<<endl;
	else
		cout<<"It is not a prime number "<<endl;
	
	return 0;
}

bool isPrime(int x){
	if(x<=1)
		return 1;
	for(int i=2;i<x;i++){
		if(x%i==0)
			return false;}
	
	return true;
}
