#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	double pricestock=1000*45.5;
	double combuy=pricestock*0.02;
	double sellstock=1000*56.9;
	double comsell=sellstock*0.02;
	double cleanprofit=(sellstock-pricestock)-(combuy+comsell);
	cout<<fixed<<setprecision(2);
	cout<<"The amount of money Joe paid for the stock = $"<<pricestock<<endl;
	cout<<"The amount of commission Joe paid his broker when he bought the stock = $"<<combuy<<endl;
	cout<<"The amount that Joe sold the stock for= $"<<sellstock<<endl;
	cout<<"The amount of commission Joe paid his broker when he sold the stock = $"<<comsell<<endl;
	cout<<"Profit = $"<<cleanprofit<<endl;
	return 0;
}

