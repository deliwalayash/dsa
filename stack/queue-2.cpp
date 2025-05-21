#include<iostream>
using namespace std;

class Queue{
    private:
    int *arr;
    int size;
    int front;
    int rear;
    int count;
    public:
    Queue(int size){
        this->arr=new int [size];
        this->size=size;
        this->front=-1;
        this->rear=-1;
        this->count=0;
    }
    void Enque(int data){
        if(this->count == this->size){
            cout <<"Queue is full" << endl;
            return;
        }
        if(this->front==-1 && this->rear == -1){
            this->front++;
            this->rear++;
            this->arr[this->rear]= data;
            this->count++;
        }
        else{
            this->rear++;
            this->arr[this->rear]=data;
            this->count++;
        }
    }
    void Deque(int data){
        if(this->count == 0){
            cout <<"Queue is Empty:";
            return;
        }
        if(this->front == this->rear){
            this->arr[this->rear]=0;
            this->front=-1;
            this->rear=-1;
            this->count=0;
            
        }
        this->arr[this->front]=0;
        this->front++;
        this->count--;     
    }
    void Display(){
        for(int i = this->front ; i <= this->rear ; i ++){
            cout << arr[i] <<" ";
        }
        cout << endl;
    }
};

int main(){
    return 0;

}