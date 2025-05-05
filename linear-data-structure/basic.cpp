#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

};

int main(){

    Node *HEAD=NULL;
    Node *HEAD=new Node();

    HEAD->data=25;
    HEAD->next=nullptr;

    cout << HEAD->data <<" "<< HEAD << endl;

    Node *n2=new Node();
    n2->data=98;
    n2->next=nullptr;
    HEAD->next=n2;

    cout << n2->data <<" "<< n2;


    return 0;
}