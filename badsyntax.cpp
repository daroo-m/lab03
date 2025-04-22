
using namespace std;

// Author: Jonah Parkes
// Date: 1/24/2024
// Purpose: This program is intended to demonstrate common syntax mistakes
// which can lead to compile-time errors. When corrected, the program will
// compute the factorial of a number.

int main() {
    cout << "Enter a number to compute its factorial: ";
    
    int factNum;
    cin >> factNum
    
    if (factnum < 0) { // cannot take the factorial of a negative number
        cout < "Error: Cannot compute fact of negative number" endl;
        return 1;
    }

    int factResult = 1;
    for (int i = 1; i <= factNum; ++i) {
        factResult *= i;
    }

    cout << factNum; << "! = " factResult << endl;
    return 0;
