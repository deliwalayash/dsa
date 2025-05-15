#include <iostream>

using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int size;
    int count;

public:
    Stack(int size)
    {
        this->arr = new int[size];
        this->top = -1;
        this->count = 0;
        this->size = size;
    }
    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "\n------------\n";
            cout << "Stack is Full";
            cout << "\n------------\n";

            return;
        }
        this->top++;
        this->arr[this->top] = data;
        this->count++;
    }
    void pop();
    void peek();
    void Display();
    bool isempty();
    bool isfull();
    void getsize();
};

void Stack ::Display()
{
    cout << "\n---------------------------\n";
    for (int i = this->top; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << "\n---------------------------\n";
}

void Stack ::pop()
{

    if (this->top == -1)
    {
        cout << "Stack is Empty" << endl;
        return;
    }
    this->arr[this->top] = 0;
    this->top--;
    this->count--;
}

void Stack ::peek()
{

    if (this->top == -1)
    {
        cout << "Stack is Empty" << endl;
        return;
    }

    cout << "Last element of stack is : " << this->arr[this->top] << endl;
}

bool Stack ::isempty()
{
    if (this->top == -1)
    {
        return true;
    }
    else
        return false;
}

bool Stack ::isfull()
{
    if (this->top == size - 1)
    {
        return true;
    }
    else
        return false;
}

void Stack ::getsize()
{
    cout << "Size of stack is:" << size;
}

int main()
{

    int choice;
    int size;
    cout << "Enter size of stack:";
    cin >> size;
    Stack stack(size);

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
        cout << "Enter 9 to Decimal to Binary:" << endl;
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
        case 5:
        {
            if (stack.isempty())
            {
                cout << "Stack is empty" << endl;
            }
            else
            {
                cout << "Stack is not empty" << endl;
            }
            break;
        }
        case 6:
        {
            if (stack.isfull())
            {
                cout << "Stack is full" << endl;
            }
            else
            {
                cout << "Stack is not full" << endl;
            }
            break;
        }
        case 7:
        {
            stack.getsize();
        }

        case 9:
        {

            int n;
            cout << "Enter Decimal num:";

            cin >> n;

            Stack binary(size);
            while (n > 0)
            {
                int rem = n % 2;
                binary.push(rem);
                n = n / 2;
            }
            binary.Display();
            break;
        }
        case 0:
        {
        }

        default:
            break;
        }

    } while (choice != 0);

    return 0;
}