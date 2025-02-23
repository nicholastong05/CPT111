#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;

int main(){
	unsigned seed= time(0);
	srand(seed);
	int num1= rand()%500+1;
	int num2= rand()%500+1;
	int sans;
	
		cout<< "  "<<setw(4) <<num1<< endl;
		cout<< "+ "<<setw(4) <<num2<< endl;
		cout<< "______"<< endl;
		cin>> sans;
		
	int cans= num1+num2;
	if (sans==cans)
		{cout<<"Correct answer!"<<endl;
		}
	else
		{cout<<"Correct answer is "<<cans<<endl;
		}
	return 0;
}
