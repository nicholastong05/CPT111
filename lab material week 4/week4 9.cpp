#include <iostream>
using namespace std;
int main()
{	double first,second,total;
	cout<<"Enter your first half and total time in a race in second separated by space : ";
	cin>>first>>total;
	second=total-first;
		if(first>second)
			{cout<<"Congratulations ! You did a negative split !";
			}
	return 0;
}
