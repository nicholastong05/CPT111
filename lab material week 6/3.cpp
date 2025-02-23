#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{string input;
fstream banana;
banana.open("joke.txt",ios::in);
 fstream banana2;
 banana2.open("punchline.txt",ios::in);
 	if(banana){
 			while(banana)
 				{getline(banana,input);
 				 cout<<input<<endl;
				 }
 		}
 	banana.close();
 	if(banana2)
 		{
			 	while(getline(banana2,input))
 				{
				 }
			cout<<input<<endl;
			banana2.close();}
	 
 }


