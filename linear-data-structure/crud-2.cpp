#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

class Linkedlist{
    public:
    Node *head;
    int count;
    Linkedlist(){
        this->head=nullptr;
        this->count=0;
    }
    void AddAtstart(int data){
        Node *newnode= new Node(data);

        if(count == 0 && head == nullptr){
            head=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
        this->count++;
    }
    void addatend(int data){

        Node *newnode= new Node(data);

        Node *temp=head;

        
        if(count == 0 && head == nullptr){
            head=newnode;
        }
        else{
            while (temp->next != nullptr)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            
        }

        this->count++;



    }

    void addatpos(int data,int pos){

        Node *newnode= new Node(data);

        Node *temp=head;

        for(int i = 1 ; i < pos -1 ;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;


    };

    void display(){

        Node *temp = head;


        while (temp != nullptr)
        {
            cout << temp->data <<" -->";
        }
        cout <<"Null" << endl;
        
    }

};




    int main()
    {

    int choice;

    Linkedlist List;
    do
    {
        cout << "Enter 1 to add node at start:" << endl;
        cout << "Enter 2 to add node at end:" << endl;
        cout << "Enter 3 to add node at any position:" << endl;
        cout << "Enter 4 to  Display Node:" << endl;
        cout << "Enter Your Choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:

        {
            int data;
            cout << "Enter your data:";
            cin >> data;
            List.AddAtstart(data);
            break;
        }
        case 2:
        {
            int data;
            cout << "enter your data:";
            cin >> data;
            List.addatend(data);
            break;
        }
        case 3:{
            int data,pos;
            cout << "enter data ";
            cin >> data;
            cout<<"enter position";
            cin >> pos;
            List.addatpos(data,pos);
            break;                                                                     


        }

        case 4:
        {
            List.display();
            break;
        }

        default:
            break;
        }

    } while (choice != 0);

    return 0;
}
