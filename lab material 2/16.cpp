#include <iostream>
#include <string>
using namespace std;
int main()
{string name;
string city;
string ambition;
string travelDest;
cout<<"Please enter your name: ";
getline(cin,name);
cout<<"Enter the city you live in: ";
getline(cin,city);
cout<<"What you want to be when you graduated? ";
getline(cin,ambition);
cout<<"What country you want to gop to travel? ";
getline(cin,travelDest);

cout<<"Hello, "<<name<<". ";
cout<<"You live in "<<city<<endl;
cout<<"For now,your ambition is to be: "<<ambition<<endl;
cout<<"Your travel destination country is: "<<travelDest<<endl;
return 0;
}
