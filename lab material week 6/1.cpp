#include<iostream>
#include<fstream>
#include <string>
using namespace std;
int main(){
	int i=1;
	string line;
	fstream infile;
	string filename;
		cout<<"Enter the filename :";
		cin>>filename;
			infile.open(filename,ios::in);
		if(!infile)
				cout<<"File does not exist"<<endl;
		else
			{getline(infile,line);
				while(infile)
					{if(i%2==1)
						{cout<<line<<endl;
						
					}
					getline(infile,line);
					i++;
						}
					}
		infile.close();
	return 0;
	}
			

