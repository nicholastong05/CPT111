#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int num[size];
    int large = -9999;
    int second = -9999;

    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num[i];
    }

    for (int value : num) {
        if (value % 2 == 0) {
            if (value > large) {
                second = large;
                large = value;
            } else if (value > second && value < large) {
                second = value;
            }
        }
    }

    if (large == -9999) {
        cout << "No even numbers found." << endl;
        return 0;
    }

    cout << "Largest even number: " << large << endl;

    if (second == -9999) {
        cout << "No second largest even number found." << endl;
    } else {
        cout << "Second largest even number: " << second << endl;
    }

    return 0;
}

