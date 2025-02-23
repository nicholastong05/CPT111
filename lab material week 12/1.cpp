#include <iostream>
#include <array>
using namespace std;

double avgArray(const array<int, 10>& num) {
    int sum = 0;
    for (int value : num) {
        sum += value;
    }
    return static_cast<double>(sum) / num.size();
}

int main() {
    array<int, 10> userNums;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cout << "#" << (i + 1) << " ";
        cin >> userNums[i];
    }
    cout << "The average of those numbers is " << avgArray(userNums) << endl;
    return 0;
}
