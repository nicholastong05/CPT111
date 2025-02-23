#include <iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
	string input;
	ifstream inFile;
	ofstream outFile;

	inFile.open("Ch3_Ex6Data.txt");
	outFile.open("Ch3_Ex6Output.dat");
	
	if (!inFile) {
    cerr << "Error: Unable to open input file!" << endl;
    return 1;
}
	if (!outFile) {
    cerr << "Error: Unable to open output file!" << endl;
    return 1;	}
	
	string first,last;
	double current,up;
	
	outFile << fixed << showpoint << setprecision(2);
	
	while(inFile>>first>>last>>current>>up)
	{
	 outFile<<first<<" "<<last<<" "<<(current*up/100)+current<<endl;}
	 
	 inFile.close();
	 outFile.close();
	 
	 cout<<"Done"<<endl;
	 
	 return 0;
	 
}
