#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double weight, miles,price;
		cout<<"Enter the weight of package between 0 to 20 in kg : ";
			 cin>>weight;
			 while(weight <= 0 || weight >20)
			{cout<<"Enter a valid weight : ";
			 cin>>weight;}
		cout<<"Enter the distance needed for delivery in miles : ";
			 cin>>miles;
			 while(miles < 10 || miles > 3000)
			{cout<<"Enter a valid distance : ";
			 cin>>miles;}
	cout<<fixed<<setprecision(2);
		if (weight <=2)
			{cout<<"Charge = $"<<miles*1.1/500<<endl;
				}	
		else if (weight <=6)
			{cout<<"Charge = $"<<miles*2.2/500<<endl;
				}	
		else if (weight <=10)
			{cout<<"Charge = $"<<miles*3.7/500<<endl;
				}	
		else 
			{cout<<"Charge = $"<<miles*4.8/500<<endl;
				}	
	return 0;
	}
