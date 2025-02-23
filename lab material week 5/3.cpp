#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	int i=1;
	do{
		cout<<num<<"   x   "<<setw(5)<<i<<"   =   "<<num*i<<endl;
		i++;
	}while(i<=10);
}
