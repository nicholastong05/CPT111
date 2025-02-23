#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
	string input;
	cout<<"Enter file name : ";
	cin>>input;
	fstream banana;
	banana.open(input,ios::in);
	char ch;
	int word=0,sentence=0;
	bool inword;
	
	if(banana)
		{while(banana.get(ch))
			{if(ch!=' '&&ch!='\n'&&ch!='.'&&ch!=','&&ch!='\t')
				{inword=true;
				}else
				{
				if(inword)
					{word++;
					inword=false;
					}}
			
			if(ch=='.')
				{sentence++;
				}
			}
		}
	banana.close();
	cout<<"Number of words = "<<word<<endl;
	cout<<"Number of sentences = "<<sentence<<endl;
}
