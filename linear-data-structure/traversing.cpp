#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

int main(){

    Node *HEAD = new Node();
    HEAD->data=25;
    HEAD->next=nullptr;

    Node *n2=new Node();
    n2->data=55;
    n2->next=nullptr;
    HEAD->next=n2;

    n2= new Node();
    n2->data=65;
    n2->next=nullptr;
    HEAD->next->next=n2;

    cout << HEAD->data <<" " << HEAD->next->data <<" " << n2->data ;
    
    return 0;

}