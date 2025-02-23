#include <iostream>
#include <string>

using namespace std;

int main(){
	string salsa []={"mild","medium","sweet","hot","zesty"};
	int sales [5],sum=0,max=-1,min=99999,maxsal=0,minsal=0;
	
	for(int i=0;i<5;i++){
		cout<<"Please enter the number of jar sold last month of flavour "<<salsa[i]<<": ";
		cin>>sales[i];
		sum+=sales[i];
		if(sales[i]>max){
			max=sales[i];
			maxsal=i;
		}
		if(sales[i]<min){
			min=sales[i];
			minsal=i;
		}
	}
	
	cout<<"SALES LAST MONTH"<<endl;
	cout<<"FLAVOUR\tSALES\n";
	for(int i=0;i<5;i++)
		cout<<salsa[i]<<"\t"<<sales[i]<<"\n";
	cout<<"Total Sales = "<<sum<<endl;
	cout<<"Highest selling product = "<<salsa[maxsal]<<endl;
	cout<<"Lowest selling product = "<<salsa[minsal]<<endl;

	
}
