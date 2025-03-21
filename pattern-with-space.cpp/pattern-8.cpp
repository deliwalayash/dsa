#include <iostream>
using namespace std;

int main() {
    int i, j;

    // Upper part of the diamond
    for(i = 1; i <= 9; i++) {
        if(i % 2 == 1) {
            // Printing leading spaces
            for (int s = i; s < 9; s++) {
                cout << " ";  // Spaces decrease as i increases
            }
            
            // Printing stars
            for (j = 1; j <= i; j++) {
                cout << "* ";  // Printing stars with a space between them
            }
            cout << endl;
        }
    }
    
    // Lower part of the diamond
    for(i = 7; i >= 1; i--) {
        if(i % 2 == 1) {
            // Printing leading spaces
            for (int s = 9; s > i; s--) {
                cout << " ";  // Spaces increase as i decreases
            }
            
            // Printing stars
            for (j = 1; j <= i; j++) {
                cout << "* ";  // Printing stars with a space between them
            }
            cout << endl;
        }
    }
    
    return 0;
}
