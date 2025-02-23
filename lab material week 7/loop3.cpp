#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int num;
	cout<<"Please enter a number: ";
	cin>>num;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Pattern A"<<setw(40)<<"Pattern B"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	for(int row=1;row<=num;row++){
		for(int i=1;i<=row;i++){
			cout<<"+";
		}
		cout<<setw(40-row);
		for(int i=num;i>=row;i--){
			cout<<"*";
		}
		cout<<endl;
			
	}
		
	return 0;
}
