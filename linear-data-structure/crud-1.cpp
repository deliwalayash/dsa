#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class Linkedlist{
    public:
    Node *head;
    int count;

    Linkedlist(){
        this->head=NULL;
        this->count=0;
    }

    void addatstart(int data){

        Node *newnode= new Node(data);

        if(count == 0 && head == NULL){
            head = newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
        this->count++;

    };
    void addatend(int data){
        Node *newnode= new Node(data);
        
        Node *temp=head;
        if(count == 0 && head == NULL){
            head=newnode;
        }
        else{
            while (temp->next != NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;

            
        }
        this->count++;

    }
    void addatpos(int data,int pos){
        Node *newnode= new Node(data);
        
        int i;
        Node *temp = head;
        for(i = 1  ; i < pos-1; i ++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;

        this->count++;

    }

    void display(){
        Node *temp = head;

        while (temp != nullptr)
        {
            cout <<temp->data <<" -->" ;
            temp=temp->next;
        }
        cout << "NULL";
        cout << endl;
        
    }


    
};

int main(){

    int choice;
    Linkedlist List;

    do
    {
        
    cout <<"Enter 1 to add at start:" << endl;
    cout <<"Enter 2 to add at end:" << endl;
    cout <<"Enter 3 to add at position:" << endl;
    cout <<"Enter 4 to add at display:" << endl;
    cout <<"Enter 5 to exit:" << endl ;
    cout <<"Enter your choice:" << endl ;
    cin >> choice;

    switch (choice)
    {
    case 1:
        {
            int data;
            cout <<"Enetr data:";
            cin >> data;
            List.addatstart(data);
            cout <<"Data Entered Successfully:" << endl;
            break;
            
        }
    case 2:
        {
            int data;
            cout <<"Enetr data:";
            cin >> data;
            List.addatend(data);
            cout <<"Data Entered Successfully:" << endl;
            break;
            
        }
    case 3:
        {
            int data,pos;
            cout << "enter position :";
            cin >> pos;
            cout <<"Enetr data:";
            cin >> data;
            List.addatpos(data,pos);
            cout <<"Data Entered Successfully:" << endl;
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