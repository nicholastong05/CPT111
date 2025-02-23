#include <iostream>
using namespace std;
int main(){
	int population[12][3];
	cout<<"Enter population of 12 country "<<endl;
	for(int i=0;i<12;i++){
	    cout<<"country "<<i+1<<endl;
		for(int j=0;j<3;j++){
			if(j==0)
			cout<<"B40 :";
			if(j==1)
			cout<<"M40 :";
			if(j==2)
			cout<<"T20 :";
			cin>>population[i][j];

	}
}
	for(int i=0;i<12;i++){
		cout<<"country "<<i+1<<endl;
		for(int j=0;j<3;j++){
			if(j==0)
			cout<<"B40 :";
			if(j==1)
			cout<<"M40 :";
			if(j==2)
			cout<<"T20 :";
            cout<<population[i][j]<<endl;}
	}
}
