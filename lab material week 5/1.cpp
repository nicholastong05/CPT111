#include <iostream>
using namespace std;
int main()
{		int num,sum=0;
		cout<<"Enter a positive number : ";
		cin>>num;
		while(num<=0)
			{	cout<<"Invalid number. Enter a positive number : ";
				cin>>num;
			}
	int i=1;
		do{		sum=sum+ i;
				i++;
		}while(i<=num);
		
		cout<<"Sum = "<<sum<<endl;	
}
