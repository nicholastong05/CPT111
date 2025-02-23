#include <iostream>
using namespace std;
int main(){
	double pound,inches,BMI;
		cout<<"Enter your weight in pounds and height in inches separated by space : ";
			cin>>pound;
			cin>>inches;
				BMI=(pound*703)/(inches*inches);
		if(BMI>25)
			{cout<<"overweight";}
		else if(BMI>18.5)
			{cout<<"optimal";}
		else
			{cout<<"underweight";}
	return 0;
}
