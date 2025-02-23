#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string input;
    
	cout << "Enter the name of file for encryption: ";
    cin >> input;

    fstream in;
    in.open(input, ios::in);

    if (!in) {
        cout << "Invalid file name." << endl;
        return 1;
    }
    
    cout << "Enter the name of file for output : ";
    cin >> input;
    
    fstream out;
    out.open(input,ios::out);
    
    
    if (!out) {
        cout << "Invalid file name." << endl;
        return 1;
    }
    
    char ch;
    
	while(in.get(ch)){
    	out.put(ch+10);
			}
	
	cout<<"Encryption done.";
	
	in.close();
	out.close();
}
    
