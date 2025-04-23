#include<iostream>

using namespace std;


class MyClass{
    private:
    int *ptr,size;

    public:
    MyClass(int size){

        this->size=size;
        this->ptr=new int[size];
    }

    void Getvalue(){
        for(int i = 0;i < this->size ; i ++){
            cout <<"Enter Array Value:" ;
            cin >> this->ptr[i];
        }
    }
    void Showvalue(){
        for(int i = 0;i < this->size ; i ++){
            cout <<this->ptr[i]<< " ";
            
        }
    }

    ~MyClass(){
        delete ptr;
        ptr = NULL;


    }


};


int main(){

    MyClass m1(5);

    m1.Getvalue();
    m1.Showvalue();

    return 0;
}