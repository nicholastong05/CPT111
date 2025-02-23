#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter two different numbers separated by space to compare : ";
	cin>> num1;
	cin>> num2;
	num1>num2 ? cout<<"Number 1 is bigger" :cout<< "Number 2 is bigger";
	return 0;
}
