#include <iostream>
using namespace std;
int main(){	
	int year,age ,birth;
	cout<<"Enter current year and your year of birth separate by space :";
		cin>>year;
		cin>>birth;
			age=year-birth;
				if(age>=18&&age<=28)
					cout<<"You are eligible";
				else
					cout<<"You are not eligible";
					return 0;	
}
