#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{unsigned seed = time(0);
 srand (seed);
 int answer= rand()%1000;
 int guess=0;
 for(int i = 1 ; ; i++)	
	 {cout<<"Guess a number less than 1000 : ";
 	 cin>>guess;
 	 	if(guess > answer)
 	 		{cout<<"Too high, try again."<<endl;
			  }
	   else if(guess < answer)
	 		{cout<<"Too low, try again."<<endl;
			 }
		else if(guess == answer)
			{cout<<"Correct answer ! You took "<<i<<" guesses to get it"<<endl;
			 break;
			}
	 }
}
