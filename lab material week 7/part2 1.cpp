#include <iostream>
using namespace std;
int main(){
	int n,num,sumeven=0,sumodd=0;
	
	cout<<"Enter number of integers you will input :";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<"Enter number :";
		cin>>num;
		
		if(num%2==0)
		sumeven+=num;
		
		else
		sumodd+=num;
	
	}
	cout<<"Sum of even number entered = "<<sumeven<<endl;
	cout<<"Sum of odd number entered = "<<sumodd<<endl;
	
	return 0;
	
}
