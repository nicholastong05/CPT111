#include <iostream>
using namespace std;
int main(){
	int num,sum=0;
	for(int i=0;i<9;i++){
		cout<<"Enter a negative number :";
		cin>>num;
		
		if(num>=0)
			continue;
			
		else 
			sum+=num;
	}
		cout<<"Sum ="<<sum;
}
