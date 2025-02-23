#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int num,storage,reverser=0,remainder;
	cout<<"Enter a nonzero positive number : ";
	cin>>num;
	while(num<=0)
		{cout<<"Invalid input. Enter a nonzero positive number : ";
		cin>>num;
		}
	storage=num;
    while  (num!=0)
		{remainder=num%10;
		 reverser=reverser*10+remainder;
		 num/=10;
		}
	if(reverser==storage)
		{cout<<"Number input is a palindrome"<<endl;
	}
	else
		{cout<<"Number input is not a palindrome"<<endl;
	}
}
