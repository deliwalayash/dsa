#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
       this->data=val;
       this->next=nullptr;
    }
};



int main(){



    Node *HEAD=new Node(25);
    Node *n2=new Node(35);
    HEAD->next=n2;
    n2=new Node(55);
    n2->next=n2;
    Node *temp=HEAD;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp=temp->next;
    }
    

    return 0;

}