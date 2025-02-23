#include <iostream>
using namespace std;

int noemployee();
int absent(int);
double average(int,int);

int main(){
	int noemplo= noemployee();
	int dayabsent= absent(noemplo);
	double absentaverage=average(noemplo,dayabsent);

	return 0;
}


int noemployee(){
	int employee;
	
	do{
	cout<<"Enter the number of employees in the company : ";
	cin>>employee;
	
	if(employee<1)
	     cout<<"Please enter number more or equal to 1 "<<endl;}
	while(employee<1);
	
	return employee;
}

int absent(int employee){
	int sum=0,absent;
	
	for(int i=1;i<=employee;i++){
		cout<<"Enter the number or day employee "<<i<<" absent during the pass year : ";
		cin>>absent;
			
			while(absent<0 || absent>=365){
				cout<<"Enter a valid number : ";
				cin>>absent;
			}
		
	    sum+=absent;
	}
	return sum;
}

double average(int employee,int absent){
	return static_cast<double>(absent)/employee;
}
