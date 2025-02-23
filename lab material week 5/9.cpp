#include <iostream>
using namespace std;
int main()
{	char no1,no2;
    int nno1,nno2,row,column;
    cout<<"Enter a character : ";
    cin>>no1;
    cout<<"Enter number of times this character has to be repeated : ";
    cin>>nno1;
    cout<<"Enter another character : ";
    cin>>no2;
    cout<<"Enter number of times this character has to be repeated : ";
    cin>>nno2;
    cout<<"Enter number of rows : ";
    cin>>row;
    cout<<"Enter number of column : ";
    cin>>column;
    int counter=row*column;
    for(int k=0; k<counter;)
    	{for(int i = 1; i<=nno1;i++)
    		{if(k==counter)
          {break;}
           cout<<no1;
    		   k++;
    		  if(k%column ==0)
    		  	{cout<<endl;
				}
			}

		for(int j=1;j<=nno2;j++)
			{ if(k==counter)
        {break;}
        cout<<no2;
    		 k++;
    		 if(k%column ==0)
    		 	{cout<<endl;
				}
			}

		}
}

    

