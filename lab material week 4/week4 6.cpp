#include <iostream>
#include<string>
using namespace std;
int main(){
	string c1,c2;
	cout<<"Enter name of first primary color in lower case : ";
	cin>>c1;
	cout<<"Enter name of second primary color in lower case : ";
	cin>>c2;
		if(c1=="red")
			{if(c2=="red")
				cout<<"red";
			else if(c2=="blue")
				cout<<"purple";
			else if(c2=="yellow")
				cout<<"orange";
			else
				cout<<"invalid color";}
		else if(c1=="yellow")
				{if(c2=="yellow")
					cout<<"yellow";
				else if(c2=="blue")
					cout<<"green";
				else if(c2=="red")
					cout<<"orange";
				else
					cout<<"invalid color";}
		else if(c1=="blue")
				{if(c2=="blue")
					cout<<"blue";
				else if(c2=="yellow")
					cout<<"green";
				else if(c2=="red")
					cout<<"purple";
				else
					cout<<"invalid color";}
		else
			{cout<<"Invalid color";}
	return 0;
}
