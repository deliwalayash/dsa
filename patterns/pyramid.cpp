#include <iostream>
using namespace std;

int main() {
    int i, j, n = 1, k;

    for (i = 1; i <= 5; i++) {
        int temp = n; // Store the starting number for the decrementing loop

        // First increasing sequence
        for (j = 1; j <= i; j++) {
            cout << n << " ";
            n++;
        }

        cout << endl;

        // Second decreasing sequence
        for (k = 1; k <= i; k++) {
            cout << temp << " "; // Use temp to print the correct decreasing sequence
            temp++;
        }

        cout << endl;
    }

    return 0;
}
