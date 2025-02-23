#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter the name of file: ";
    cin >> input;

    fstream file;
    file.open(input, ios::in);

    if (!file) {
        cout << "Invalid file name." << endl;
        return 1;
    }

    string line;
    int wordcount = 0;
    string word;

    while (getline(file, line)) {
        for (int i = 0; i < line.size(); ++i) {
            char ch = line[i];
            
   
            if (ch == ' ' || ch == '\n' || ch == '.' || ch == ',' || ch == '!' || ch == '?' || ch == ';' || ch == ':') {
                if (word.length() >= 10) {
                    cout << word << " (" << word.length() << " characters)" << endl;
                    wordcount++; 
                }
                word.clear(); 
            } else {
                word += ch;  
            }
        }
        

        if (word.length() >= 10) {
            cout << word << " (" << word.length() << " characters)" << endl;
            wordcount++;
        }
    }

    file.close();  

    cout << "\nTotal number of words with at least 10 characters: " << wordcount << endl;

    return 0;
}
