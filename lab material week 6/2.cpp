#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{ string input;
  fstream hahabanana;
  int linecounter=0;
  cout<<"Enter the filename : ";
 	 getline(cin,input);
  hahabanana.open(input,ios::in);
  if(hahabanana)
  		{getline(hahabanana,input);
  		 while(hahabanana)
  		 		{cout<<input<<endl;
  		 		getline(hahabanana,input);
  		 		linecounter++;
  		 		if(linecounter%24==0)
  		 			{cout<<"Press any key to proceed "<<endl;
					cin.get();}
					  
				   }
			hahabanana.close(); 
			   }
	
	else
		cout<<"Invalid file"<<endl;
}
  				
			
		  

