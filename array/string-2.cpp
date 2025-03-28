#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;  // Reading the two integers a and b

    // Array for number-to-word mapping for numbers 1 to 9
    string numberWords[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    // Iterate over the range [a, b]
    for (int i = a; i <= b; ++i) {
        if (i >= 1 && i <= 9) {
            // If the number is between 1 and 9, print its English word representation
            cout << numberWords[i - 1] << endl;
        } else if (i >= 10) {
            // If the number is 10 or greater, print "even" or "odd"
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
    
    return 0;
}
