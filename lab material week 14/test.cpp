#include <iostream>
using namespace std;

int doSomething(int *x,int *y){
	int temp=*x;
	*x=*y *10;
	*y=temp *10;
	return *x +*y;
}

int main(){
	int x=1,y=2;
	int *xptr=&x;
	int *yptr=&y;
	int sumtimes10 = doSomething(xptr,yptr);
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<sumtimes10<<endl;
	return 0;
}


