#include<iostream>

using namespace std;

int main(){


    int *ptr;

    ptr = new int[6]{10,200,300,40,500,600};

    cout << ptr << endl;
    cout << *(ptr +1)<< endl << endl;

    for(int i = 0; i < 6; i ++){
        cout << *(ptr + i) << endl; // both statement are same
        // cout << ptr[i] << endl;  // both statement are same
    }

    cout << endl << endl;

    delete[] ptr; // delete its data it is dandling pointer
    

    for(int i = 0; i < 6; i ++){
        cout << *(ptr + i) << endl; // both statement are same
        // cout << ptr[i] << endl;  // both statement are same
    }

    ptr=NULL;
   

    return 0;
}