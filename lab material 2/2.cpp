#include <iostream>
using namespace std;
int main(){
	double RegularPrice=59.95,_discount,salePrice;
	
	_discount=RegularPrice*0.2;
	
	salePrice= RegularPrice-_discount;
	
	cout<<"Regular price: $"<<RegularPrice<<endl;
	cout<<"Discount amount: $"<<_discount<<endl;
	cout<<"Sale price: $"<<salePrice<<endl;
	return 0;
}
