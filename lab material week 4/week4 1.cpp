#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	if(num>0)
	cout<<"The absolute value of entered number is : "<<num;
	else
	cout<<"The absolute value of entered number is : "<<abs(num);
	return 0;
}
