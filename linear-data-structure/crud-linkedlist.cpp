#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class Linkedlist
{
public:
    Node *head;
    int count;

    Linkedlist()
    {
        this->head = nullptr;
        this->count = 0;
    }
    bool isEmpty(){
        if(count == 0 || head == nullptr ){
            return true;
        } else {
            return false;
        }
    }

    void addAtstart(int data)
    {
        Node *newnode = new Node(data);
        if(count == 0 && head == NULL){
            head=newnode;
        }
        else
       {
        newnode->next = head;
        head = newnode;
       }

        this->count++;
    }
    void addAtend(int data)
    {
        Node *newnode = new Node(data);
        Node *temp = head;
        if (this->count == 0)
        {
          head = newnode;
        }
        else
        {
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
        this->count++;
    };

    void addatpos(int data,int pos){

        int i;
        Node *newnode= new Node(data);
        Node *temp=head;

        for(i = 0; i < pos-1 ; i ++){
            temp=temp->next;
        }

        newnode->next=temp->next;
        temp->next=newnode;
        this->count++;

    }
    void update(int data,int pos){

        if(count == 0 && head == nullptr){
            cout <<"Linked list is empty:" << endl;
            return;
        }
        Node *temp=head;
        for(int i = 0 ; i < pos-1 ; i ++){
            temp = temp->next;
        }
        temp->data=data;
        
    };

    void deleteatstart(){
       Node *temp = head;


       head=head->next;
       delete temp;
       temp = nullptr;

    }

    void deleteatend(){
        Node * temp=head;
        if(isEmpty() == true){
            cout << "Linked list is empty...." << endl;
            return;
        };
        if(this->count == 1){
            this->deleteatstart();
        }
        while (temp->next->next != NULL)
        {
            temp=temp->next;
        }

       delete temp->next;
    //    temp->next=nullptr; 

       this->count--;
        
    }

    void deleteatanypos(int pos){
        Node *curr=head;
        Node *prev = head;

        isEmpty();

        for(int i = 0 ; i < pos ; i ++){
            curr=curr->next;
        }
        for(int i = 0 ; i < pos-1 ; i ++){
            prev=prev->next;
        }

        prev->next=curr->next;
        delete curr;
        prev = nullptr;
        this->count--;


    }

    void display()
    {

        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " -->";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    };
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
        cout << "Enter 5 to  Upadate Node:" << endl;
        cout << "Enter 6 to  Delete at start Node:" << endl;
        cout << "Enter 7 to  Delete at end Node:" << endl;
        cout << "Enter 8 to  Delete at Any position:" << endl;
        cout << "Enter Your Choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:

        {
            int data;
            cout << "Enter your data:";
            cin >> data;
            List.addAtstart(data);
            break;
        }
        case 2:
        {
            int data;
            cout << "enter your data:";
            cin >> data;
            List.addAtend(data);
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
        case 5:
        {
            int data,pos;
            cout << "enter data ";
            cin >> data;
            cout<<"enter position";
            cin >> pos;
            List.update(data,pos);
            cout <<"Data updated Successfully :" << endl;
          
            break;
        }
        case 6:
        {
          
            List.deleteatstart();
            cout <<"Data updated Successfully :" << endl;
          
            break;
        }
        case 7:{

            List.deleteatend();
            break;
        }
        case 8:{
            int pos;
            cout <<"Enter any position you want to delete:";
            cin >> pos;
            List.deleteatanypos(pos);
            break;
        }
        default:
            break;
        }

    } while (choice != 0);

    return 0;
}