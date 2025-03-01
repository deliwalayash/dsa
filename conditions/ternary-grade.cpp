#include<iostream>

using namespace std;

int main(){

    int mark;
    char grade;

    cout << "Enter Your Mark" << endl;
    cin >> mark;

    grade = (mark > 90) ? 'A' : (mark >80) ? 'B' : (mark > 70) ?  'C' : 'D';

    cout << grade << endl;

    switch (grade)
    { 
        case 'A':
            cout << "Excellent Work." << endl;
            break;
        case 'B':
            cout << "Well Done." << endl;
            break;
        case 'C':
            cout << "Good Job." << endl;
            break;
        case 'D':
            cout << "You are Passed." << endl;
            break;
        case 'E':
            cout << "You are Passed,But you can do Better." << endl;
            break;
        case 'F':
            cout << "You are failed." << endl;
            break;
    }
}