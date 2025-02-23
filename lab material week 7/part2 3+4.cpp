#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{unsigned seed = time(0);
 srand (seed); 
 char answer=(rand()%95)+32;
 int guesscount=0;
 char guess;
 
 while(true)
 {cout<<"Enter your guess : ";
 cin>>guess;
 guesscount++;
 if(guess == answer)
 {cout<<"Congratulations!You guess correct!"<<endl;
 break;}
 
 else if(guess>answer)
 cout<<"Symbol ASCII too high, try again."<<endl;
 
 else if(guess<answer)
 cout<<"Symbol's ASCII too low, try again."<<endl;
 
}

cout<<"Number of guess used = "<<guesscount<<endl;

return 0;

 
 }
