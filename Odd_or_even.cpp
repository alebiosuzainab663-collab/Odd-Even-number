#include <iostream>
using namespace std;

int main() {
    // Example: checking the number 8
    int example = 8;
    if (example % 2 == 0) {
        cout << example << " is Even" << endl;
    } else {
        cout << example << " is Odd" << endl;
    }

    // Now check any number you type
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " is Even" << endl;
    } else {
        cout << number << " is Odd" << endl;
    }

    return 0;
}
