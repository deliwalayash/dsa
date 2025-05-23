#include<iostream>

using namespace std;

template<typename T>
class Stack{
    private:
    T *arr;
    int top;
    int count;
    int size;
    public:

    Stack(int size){
        this->arr =new T[size];
        this->top=-1;
        this->count=0;
        this->size = size;
    }
   
    void push(T data){
        this->top++;
        arr[this->top]=data;
       
        this->count++;
    }
    void pop(){
        arr[this->top]=0;
        this->top--;
        this->count--;
    }
    void peek(){
        cout <<"last data of stack:" << arr[this->top] << endl;
    }

    int getTop(){
        return arr[this->top];

    }

    void Display(){

        for(int i = this->top ; i >=0 ; i --){
            cout << arr[i] <<" ";
        }
        cout << endl;
    }
    int getArray(int i){
        return this->arr[i];
    }
 
};

int main(){
    int size;
    int choice;
    cout <<"Enter size of stack";
    cin  >> size;

    Stack <int> stack(size);

     do
    {
        cout << "Enter 1 to insert data:" << endl;
        cout << "Enter 2 to pop data:" << endl;
        cout << "Enter 3 to peek data:" << endl;
        cout << "Enter 4 to display data:" << endl;
        cout << "Enter 5 to stack is empty data:" << endl;
        cout << "Enter 6 to stack is full data:" << endl;
        cout << "Enter 7 to stack is size data:" << endl;
        cout << "Enter 8 to reverse tack:" << endl;
        cout << "Enter 9 to reverse same stack:" << endl;
        cout << "Enter 10 to check palindrome string:" << endl;
        cout << "Enter 11 to decimal to binary:" << endl;
        cout << "Enter 0 to exit" << endl;
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
            stack.peek();
            break;
        }
        case 4:
        {
            stack.Display();
            break;
        }
        case 8:
        {
            Stack <int> reverse(size);

            for(int i = size-1 ; i >=0 ; i --){
                reverse.push(stack.getArray(i));
            }

            reverse.Display();
        }
        case 9:
        {
          for(int i = size-1; i >=0 ; i --){
            stack.push(stack.getTop());
            stack.pop();
          }

          stack.Display();

        }
        case 10:
        {
            string s;
            cout <<"Enter string you want to check palindrome:->"<< endl;
            cin >>s;
            Stack <char> s1(size);
            bool flag=1;

            for(char d:s){
                s1.push(d);
            }

            for(char f:s){
                if(f != s1.getTop()){
                    flag = 0;
                    cout <<"String is not palindome:"<< endl;
                    break;
                }
                s1.pop();
            }

            if(flag ==1){
                cout <<"Given String is palindrome:"<< endl;
            }
            break;
        }
        case 11:
        {
            int n,rem;
            cout <<"Enter decimal that you want to convert in binary:";
            cin >> n;
            Stack<int> num(size);

            while( n > 0){
                rem = n % 2;
                num.push(rem);
                n = n / 2;
            }
            num.Display();

        }

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