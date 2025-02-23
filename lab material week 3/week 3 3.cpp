#include <iostream>
using namespace std;
int main(){
	long long ic;
	cout<<"Enter your ic number without - :";
	cin>>ic;
	int yearofbirth=ic/10000000000;
	int age=2024-(yearofbirth+2000);
	cout<<"You are "<<age<<" years old at 2024."<<endl;
	return 0;
}
