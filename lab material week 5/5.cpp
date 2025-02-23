#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int i=5;
	do
		{cout<<"Calories burnt when running on treadmill for "<<setw(2)<<i<<" minutes = "<<setw(3)<<i*3.6<<" calories."<<endl;	
		 i+=5;}while(i<=30);
		 }
