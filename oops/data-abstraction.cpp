#include<iostream>

using namespace std;

class App{

    public:
    
    virtual void login()=0;
};

class Insta:public App{
   public:

   void login(){
    cout << "Enter Data:";
   }
};
int main(){


    Insta i1;

    i1.login();
    return 0;
}