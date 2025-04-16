#include <iostream>
using namespace std;
 
class Overload {
public:
    void print(int num) {
        cout << "Printing integer: " << num << endl;  // same function name but take different values is
                                                     // called polymorphism
    }
 
    void print(double num) {
        cout << "Printing double: " << num << endl;
    }
 
    void print(string text) {
        cout << "Printing string: " << text << endl;
    }
};
 
int main() {
    Overload obj;
     
    obj.print(5);
    obj.print(10.5);
    obj.print("Hello World");
     
    return 0;
}