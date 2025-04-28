#include <iostream>

using namespace std;

class MyClass
{
private:
    int *ptr, size;

public:
    MyClass(int size)
    {

        this->size = size;
        this->ptr = new int[size];
    }

    void Getvalue()
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << "Enter Array Value:";
            cin >> this->ptr[i];
        }
    }
    void Showvalue()
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << this->ptr[i] << " ";
        }
    }

    ~MyClass()
    {
        delete ptr;
        ptr = NULL;
    }
};

int main()
{

    int size;

    cout << "Enter size of array:";
    cin >> size;

    MyClass m1(size);

    m1.Getvalue();
    m1.Showvalue();

    cout << endl
         << sizeof(m1);

    cout << "Size of m1 object: " << sizeof(m1) << " bytes" << endl;
    cout << "Size of dynamic array: " << size * sizeof(int) << " bytes" << endl;
    cout << "Total size used: " << sizeof(m1) + size * sizeof(int) << " bytes" << endl;


    return 0;
}