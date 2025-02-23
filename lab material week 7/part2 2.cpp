#include <iostream>
using namespace std;
int main(){
	int num,odd=0,sumodd=0;
	
	cout<<"Enter integers (enter 0 to stop input) :"<<endl;

	
	while(true){
	
		cout<<"Enter number :";
		cin>>num;
		
		if(num==0)
		break;
		
		if(num%2 !=0)
		{
		odd++;
		sumodd+=num;}
	
	}
	cout<<"No of odd number entered = "<<odd<<endl;
	cout<<"Sum of odd number entered = "<<sumodd<<endl;
	
	return 0;
	
}
