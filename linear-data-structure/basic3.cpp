#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

};

int main(){
    
   
   Node *HEAD=NULL;
   HEAD=new Node();
   
   
   HEAD->data=25;
   HEAD->next=nullptr;
   cout <<"Head Address:" << HEAD << " " <<"HEAD data:" << HEAD->data  << endl;

   Node *n2=new Node();
   n2->data=35;
   n2->next=nullptr;
   HEAD->next=n2;
   cout <<"Head Address:" << HEAD->next << " " <<"HEAD data:" << HEAD->data  << endl;
   cout <<"n2 Address:" << n2 << " " <<"n2 data:" << n2->data  << endl;
   

   return 0;
}