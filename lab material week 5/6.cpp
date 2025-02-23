#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int speed,time;
	cout<<"What is the speed of the vehicle in mph? ";
	cin>>speed;
	while(speed<=0)
		{cout<<"Invalid speed.What is the speed of the vehicle in mph? ";
		  cin>>speed;
		}
	cout<<"How many hours has it traveled? ";
	cin>>time;
	while(time<=1)
		{cout<<"Invalid time.How many hours has it traveled? ";
		 cin>>time;
		}
	cout<<"Hour Distance Traveled"<<endl;
	cout<<"--------------------------------"<<endl;
	int i=1;
	do
		{cout<<setw(5)<<i<<" "<<setw(5)<<speed*i<<endl;
		i++;
		}while(i<=time);
}
