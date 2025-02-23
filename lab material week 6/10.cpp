#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
int main(){
	string input;
	cout<<"Enter file name : ";
	cin>>input;
	
	fstream banana;
	banana.open(input,ios::in);
	
	if(!banana)
		{
		cout<<"Invalid file name "<<endl;
	return 0;}
		
	int p1,p2,p3,p4,a1,a2,a3,a4;
	
	banana>>p1>>a1;
	banana>>p2>>a2;
	banana>>p3>>a3;
	banana>>p4>>a4;
	
	int totalppl=a1+a2+a3+a4;
	double totalsales=a1*p1+a2*p2+a3*p3+a4*p4;
	
	cout << fixed << showpoint << setprecision(2);
	cout<<"Total ticket sales = "<<totalppl<<endl;
	cout<<"Total sales amount = $"<<totalsales<<endl;
	
	banana.close();
	
	return 0;
	
}
