#include <iostream>

using namespace std;

int main(){
	int num[10];
	for(int i=0;i<10;i++){
		cout<<"Enter num "<<i+1<<" :";
		cin>>num[i];
	}
	int big=num[0];
	int small=num[0];
	
	for(int value : num){
		if(value>big)
			big=value;
		if(value<small)
			small= value;
	}
	cout<<"Biggest number you entered is : "<<big<<endl;
	cout<<"Smallest number you entered is : "<<small<<endl;
	return 0;
}
