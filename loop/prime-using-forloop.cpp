#include<iostream>

using namespace std;

int main(){
    int num; // first we intialize the number
    
    for(num = 2; num < 100; num++){ // we loop into each number
        
        bool found = true; // Assume that the number is prime already

        for(int i = 2; i < num; i++){ // we check it using loop that it is prime or not
            if(num % i == 0){ // divisibility check
                found = false; // if not found then false
                break; // then we break that loop
            }
        }

        if(found == true){  // if we found the number which is not divisible by any number
            cout << num << " "; // then we printed that number
        }
    }
    cout << endl; // after that printing a space



    return 0;
}