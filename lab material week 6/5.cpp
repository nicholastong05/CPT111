#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{ int i=1;
string input;
  fstream hahabanana;
  
  
  cout<<"Enter the filename : ";
 	 getline(cin,input);
 	 
 	 
  hahabanana.open(input,ios::in);
  
  
  if(hahabanana)
  		{
  		 while(getline(hahabanana,input))
  		 		{cout<<i<<":"<<input<<endl;
  		 		i++;
  		 		if((i-1)%24==0)
  		 			{cout<<"Press any key to proceed "<<endl;
					cin.get();}
					  
				   }
			hahabanana.close(); 
			   }
	
	else
		cout<<"Invalid file"<<endl;
}
