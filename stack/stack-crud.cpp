#include<iostream>
#include<string>
using namespace std;

class Stack{
    private:
    int *arr;
    char*arr2;
    int top;
    int size;
    int count;
    public:

    Stack(int size){
        this->arr=new int[size];
        this->size=size;
        this->count=0;
        this->top=-1;
    }
    Stack(){
        this->arr2=new char[100];
        this->count=0;
        this->top=-1;
    }
   
    void push(int data){
        if(count == size){
            cout <<"Stack is full:" << endl;
            return;
        }
        this->top++;
        arr[this->top]=data;
        this->count++;
    }
    void push(char data){
        if(count == size){
            cout <<"Stack is full:" << endl;
            return;
        }
        this->top++;
        arr2[this->top]=data;
        this->count++;
    }
    void pop(){
        if(count == 0){
            cout <<"Stack is empty:->" << endl;
            return;
        }

        arr[this->top]=0;
        this->top--;
        this->count--;
    }
    void pop2(){
        if(count == 0){
            cout <<"Stack is empty:->" << endl;
            return;
        }

        arr2[this->top]=0;
        this->top--;
        this->count--;
    }
    void display(){
        if(count == 0){
            cout <<"Stack is empty:" << endl;
            return;
        }

        for(int i = this->top ; i >=0 ; i--){
            cout <<arr[i] <<" ";
        }
        cout << endl;
    }
    char Gettop(){
        return this->arr2[top];
    }
};

int main(){
    int size;
    int choice;
    cout <<"Enter size of stack" << endl;
    cin  >> size;
    cin.ignore();

    Stack stack(size);

     do
    {
        cout << "Enter 1 to insert data:" << endl;
        cout << "Enter 2 to pop data:" << endl;
        cout << "Enter 3 to display data:" << endl;
        cout <<"Enter 4 to check palindrom string:";
        // cout << "Enter 4 to display data:" << endl;
        // cout << "Enter 5 to stack is empty data:" << endl;
        // cout << "Enter 6 to stack is full data:" << endl;
        // cout << "Enter 7 to stack is size data:" << endl;
        // cout << "Enter 8 to reverse tack:" << endl;
        // cout << "Enter 9 to reverse same stack:" << endl;
        // cout << "Enter 0 to exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "Enter Data:" << endl;
            cin >> data;
            stack.push(data);
            break;
        }
        case 2:
        {
            stack.pop();
            break;
        }
        
        case 3:
        {
            stack.display();
            break;
        }
        case 4:
        {
            string s;
            Stack palindrome;
            cout <<"Enter string you want to check palindome:" << endl;
            cin >>s;

            bool flag = 1;

            for(char val :s){
                palindrome.push(val);
            }
         
            for(char d: s){
                if(d != palindrome.Gettop()){
                    flag = 0;
                    cout <<"the string is not palindrome:" << endl;
                    break;
                }
                palindrome.pop2();
            }
            if(flag == 1){
                cout <<"Entered String is palindrome:" << endl;
            }
            break;
        }
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