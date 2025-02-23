#include <iostream>
#include <string>
using namespace std;
int main()
	{double second;
	string med;
	cout<<"Enter the medium ( A for carbon dioxide , B for air , C for helium , D for hydrogen ) : ";
	cin>>med;
		while(med !="A" && med !="a" && med !="B" && med !="b" && med !="C" && med !="c" && med !="D" )
			{cout<<"Enter a valid selection : ";
			 cin>>med;
			}
	cout<<"Enter the number of seconds : ";
	cin>>second;
		while(second<0 || second>30)
			{cout<<"Enter a valid time : ";
			cin>>second;
			}
		if(med=="A" || med=="a")
			{cout<<"The distance between the source of the sound and the detection location is : "<<second*258<<" meters"<<endl;
		}
		else if(med=="B" || med=="b")
			{cout<<"The distance between the source of the sound and the detection location is : "<<second*331.5<<" meters"<<endl;	
		}
		else if(med=="C" || med=="c")
			{cout<<"The distance between the source of the sound and the detection location is : "<<second*972<<" meters"<<endl;
		}
		else
			{cout<<"The distance between the source of the sound and the detection location is : "<<second*1270<<" meters"<<endl;
		}

}

