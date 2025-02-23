#include <iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
	string input;
	ifstream inFile;
	ofstream outFile;
	
	cout<<"Enter file name for input data : ";
	cin>>input;
	
	inFile.open(input);
	
	cout<<"Enter file name for output data : ";
	cin>>input;
	
	outFile.open(input);
	
	string first,second,department;
	double gross,bonus,tax,distance,time,num,cost;
	
	if(!inFile){
		cout<<"Invalid file name"<<endl;
	}
	
	inFile>>first>>second>>department;
	inFile>>gross>>bonus>>tax;
	inFile>>distance>>time;
	inFile>>num>>cost;
	
	outFile<<fixed<<setprecision(2);
	outFile<<"Name: "<<first<<" "<<second<<", Department: "<<department<<endl;
	outFile<<"Monthly Gross Salary: $"<<gross<<", Monthly Bonus: "<<bonus<<"%,"<<endl;
	outFile<<"Taxes: "<<tax<<"%"<<endl;
	outFile<<"Paycheck: $"<<gross+(bonus*gross/100)-(tax*gross/100)<<endl;
	outFile<<"Distance Traveled: "<<distance<<" miles, Travelling Time: "<<time<<endl;
	outFile<<"hours"<<endl;
	outFile<<"Average Speed: "<<distance/time<<" miles per hour"<<endl;
	outFile<<"Number of Coffee Cups Sold: "<<num<<", Cost: $"<<cost<<" per cup"<<endl;
	outFile<<"Sales Amount = $"<<num*cost<<endl;
	
	inFile.close();
	outFile.close();
	
	cout<<"Done"<<endl;
	
	return 0;
}
