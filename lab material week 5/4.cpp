#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	const double pi=3.141593;
	cout<<fixed<<setprecision(3);
	int i=0;
	do
		{cout<<setw(2)<<i<<(char)248<<" = "<<setw(5)<<i*pi/180<<"radians"<<endl;
		 i+=10;
		}while(i<=90);
}
	
