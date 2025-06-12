#include<iostream>
using namespace std;

int main() {
    int i, j;

    // Iterate over rows
    for(i = 1; i <= 9; i++) {
        // Iterate over columns
        for(j = 1; j <= 9; j++) {
            // Conditions for the swastik pattern
            // if ((j == 1 && i <= 5) ||  // Left vertical line in upper part
            //     (i == 5) ||             // Middle horizontal line
            //     (j == 9 && i >= 5) ||   // Right vertical line in lower part
            //     (i == 1 && j >= 5) ||   // Top horizontal line in right part
            //     (j == 5 ) ||   // Middle vertical line in upper part
            //     (i == 9 && j <= 5)) {   // Bottom horizontal line in left part
            //     cout << "* ";
            // } else {
            //     cout << "  "; // Space
            // }
            cout <<i <<j <<" ";
        }
        cout << endl;
    }

    return 0;
}
