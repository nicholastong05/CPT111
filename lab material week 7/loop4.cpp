#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int rows;
	
	cout<<"Enter number of rows: ";
	cin>>rows;
	
	for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
      
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

   
    for (int i = rows - 1; i >= 1; i--) {
       
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
       
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
