#include<iostream>

using namespace std;

class Queue{
    private:
    int *arr;
    int front;
    int rear;
    int count;
    int size;

    public:
    Queue(int data){
        this->arr=new int[data];
        this->front=-1;
        this->rear=-1;
        this->count=0;
    }
    void Enque(int data);


    void Deque();
    void Display();
};

void Queue::Enque(int data){
    if(this->count == size){
        cout <<"Queue is Full:";
        return;
    }

    if(this->front == -1 && this->rear==-1){
        this->front++;
        this->rear++;
        this->arr[this->rear]=data;
        this->count++;
    }
    else{
        this->rear++;
        this->arr[this->rear]=data;
        this->count++;

    }
};

void Queue::Deque(){

    if(this->count == 0){
        cout <<"The queue is empty:";
    }

    if(this->front == this->rear){
        this->arr[this->rear]=0;
        this->front=-1;
        this->rear=-1;
        this->count--;
    }
    else{
        this->arr[this->front]=0;
        this->front++;
        this->count--;

    }
}

void Queue::Display(){
    for (int i = this->front ; i <= this->rear ; i ++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main(){

   
    
        // case 4:
        // {
        //     stack.Display();
        //     break;
        // }
        // case 8:
        // {
        //     Stack reverse(size);

        //     for(int i = size-1 ; i >=0 ; i --){
        //         reverse.push(stack.getArray(i));
        //     }

        //     reverse.Display();
        // }
        // case 9:
        // {
        //   for(int i = size-1; i >=0 ; i --){
        //     stack.push(stack.getTop());
        //     stack.pop();
        //   }

        //   stack.Display();

        // }

        // case 5:
        // {   
        //     if(stack.isempty()){
        //         cout << "Stack is empty" << endl;
        //     }else{
        //         cout << "Stack is not empty" << endl;
        //     }
        //     break;
        // }
        // case 6:
        // {   
        //     if(stack.isfull()){
        //         cout << "Stack is full" << endl;
        //     }else{
        //         cout << "Stack is not full" << endl;
        //     }
        //     break;
        // }
        // case 7:
        // {   
        //     stack.getsize();
        // }
      
        // case 9:
        // {   
            
        //     int n;
        //     cout << "Enter Decimal num:";

        //     cin >> n;

        //     Stack binary(size);
        //     while(n > 0){
        //         int rem = n %2;
        //         binary.push(rem);
        //         n = n /2;
        //     }
        //     binary.Display();
        //     break;
        // }
        // case 0:
        // {
        // }

        default:
            break;
        }

    } while (choice != 0);

    return 0;
}