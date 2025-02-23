#include <iostream>
using namespace std;

double inpatient(int,double,double,double);
double outpatient(double,double);

int main(){
	int day;
	double type=0,rate,charge,services,total;
	
	while(type!=1 && type!=2)
		{cout<<"Enter 1 if you are an in-patient and 2 if you are an out-patient : ";
		cin>>type;
			if(type!=1 && type!=2)
				cout<<"Please enter a valid number."<<endl;}
	
	if(type==1){
		do{
		cout<<"Enter the number of days spent in the hospital : ";
			cin>>day;
			if(day<0)
			    cout<<"Please enter a valid input "<<endl;}
		while(day<0);
		
		do{
		cout<<"Enter the daily rate : ";
			cin>>rate;
			if(rate<0)
				cout<<"Please enter a valid input "<<endl;}
		while(rate<0);}
		
		do{
		cout<<"Enter the hospital medicaiton charges : $";
		    cin>>charge;
		    if(charge<0)
		  	  cout<<"Please enter a valid input "<<endl;}
        while(charge<0);
		
		do{
		cout<<"Enter the charges for hospital services : $";
		   cin>>services;
		   if(services<0)
		  	 cout<<"Please enter a valid input "<<endl;}
        while(services<0);
			
	if(type==1)
	   total=inpatient(day,rate,charge,services);
	else
	   total=outpatient(charge,services);
		
	cout<<"Total charges = $"<<total;
	
	return 0;
}

double inpatient(int day,double rate,double charge,double services){
	return (day*rate)+charge+services;
}

double outpatient(double charge,double services){
	return charge + services;
}

