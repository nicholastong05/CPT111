#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int first,second,third,diff;
	cout<<"Enter first number for an arithmetic series: ";
	cin>>first;
	cout<<"Enter second number for the series: ";
	cin>>second;
	cout<<"Enter third number as upper limit for the series: ";
	cin>>third;
	diff=second-first;
	cout<<first;
	int i=1;
	do
		{cout<<" , "<<first+i*diff;
		i++;
		}while(first+i*diff<=third);
}
