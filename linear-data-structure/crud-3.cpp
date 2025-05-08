#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

class Linkedlist{
    public:
    Node * head;
    int count;

    Linkedlist(){
        this->head=nullptr;
        this->count=0;
    }

    bool isempty(){
        if(count == 0 && head == nullptr){
            return true;
        }
        else{
            return false;
        }
    }

    void addatstart(int data){

        // Node *newnode = new Node();// do not do like this
        Node *newnode= new Node(data);

        if(isempty() == true){
            head = newnode;
        }
        else{
            newnode->next=head;
            head= newnode;
        }
        this->count++;
    }
    void addatend(int data){

        // Node *newnode = new Node(data);
        Node *newnode= new Node(data);
        Node *temp=head;

        if(isempty() == true){
            head = newnode;
        }
        else{
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next=newnode;

        }
        this->count++;
    }
    void addatpos(int data,int pos){

        // Node *newnode = new Node(data);
        Node *newnode= new Node(data);
        Node *temp=head;

        for(int i = 1 ; i < pos-1 ; i ++){
            temp = temp->next;
        }

        newnode->next= temp->next;
        temp->next=newnode;

        // if(isempty() == true){
        //     head = newnode;
        // }
        // else{
        //     while(temp->next != nullptr){
        //         temp = temp->next;
        //     }
        //     temp->next=newnode;

        // }
        this->count++;
    }
    void update(int data,int pos){
        Node *temp = head;

        for ( int i = 0 ; i < pos-1; i ++){
            temp = temp->next;
        }

        temp->data= data;



    }
    void deleteatstart(){
        Node *temp = head;
        head->next=temp->next;
        delete temp;
        temp = nullptr;
        this->count--;
    }
    void deleteatend(){
        Node *temp=head;

        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
      
        this->count--;
    }

    void deleteatpos(int pos){
        Node *curr=head;
        Node *prev=head;

        for(int i = 1 ; i < pos ; i ++){
            curr = curr->next;
        }
        for(int i = 1 ; i < pos-1 ; i ++){
            prev = prev->next;
        }

        prev->next=curr->next;
        delete curr;
        prev = nullptr;


    }

    void display(){
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data <<"-->" ;
            temp = temp->next;
        }
        cout <<"Null";
        cout << endl;
        
    }
    void findmax(){
        Node *temp = head;

        int max=head->data;

        while(temp != nullptr){
            if( temp->data > max){
                max = temp->data;
            }
            temp = temp->next;
        }

        cout <<"maximum = " << max << endl;
    }
    void findnode(int data){

        Node *temp = head;
        int find=data;
        int count2=1;

        while(temp != nullptr){
            if(find == temp->data){
                cout <<"data found on position " << count2 << endl;
                return;
            }
            count2++;
            temp = temp->next;
        }


    }

    void reverse(){
        Node *prev=nullptr;
        Node *curr=head;
        Node *next2;

        while (curr != nullptr)
        {
            next2=curr->next;
            curr->next=prev;
            prev = curr;
            curr = next2;
        }
        

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
        cout << "Enter 5 to  Upadate Node:" << endl;
        cout << "Enter 6 to  Delete at start Node:" << endl;
        cout << "Enter 7 to  Delete at end Node:" << endl;
        cout << "Enter 8 to  Delete at Any position:" << endl;
        cout << "Enter 9 to  find Maximmum:" << endl;
        cout << "Enter 10 to  find node counter:" << endl;
        cout << "Enter 11 to  reverse:" << endl;
        cout << "Enter Your Choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:

        {
            int data;
            cout << "Enter your data:";
            cin >> data;
            List.addatstart(data);
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
            List.deleteatpos(pos);
            break;
        }
        case 9:{
            List.findmax();
            break;
        }
        case 10:{
            int data;
            cout <<"enter data you want to fine in node:";
            cin >> data;
            List.findnode(data);
            break;
        }
        case 11:{
          
            List.reverse();
            cout <<"linked liste reverse successfully:" << endl;
            break;
        }
        default:
            break;
        }

    } while (choice != 0);

    return 0;
}