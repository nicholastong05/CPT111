#include <iostream>

using namespace std;

void total(double []);
void average(double);
void highest(double []);
void lowest( double []);

int main(){
	double rainfall[12];
	for(int i=0;i<12;i++){
		rainfall[i]=-1;
		while(rainfall[i]<0){
			cout<<"Enter rainfall for "<<i+1<<" month(must be positive number) :";
			cin>>rainfall[i];
		}
	}
	total(rainfall);
	highest(rainfall);
	lowest(rainfall);
	
	return 0;
}

void total(double rf[]){
	double sum=0;
	for(int i=0;i<12;i++)
	sum+=rf[i];
	cout<<"Total rainfall in the year = "<<sum<<endl;
	average(sum);
}

void average(double sum){
	cout<<"Average of rainfall per month = "<<sum/12<<endl;
}

void highest(double rf[]){
	double height=-1;
	int maxmonth=-1;
	for(int i = 0;i<12;i++){
		if(rf[i]>height){
			height=rf[i];
			maxmonth=i+1;
		}
	}
	cout<<"Month with max amount = "<<maxmonth<<endl;
}

void lowest(double rf[]){
	double min=999999999;
	int minmonth=-1;
	for(int i = 0;i<12;i++){
		if(rf[i]<min){
			min=rf[i];
			minmonth=i+1;
		}
	}
	cout<<"Month with min amount = "<<minmonth<<endl;
}

