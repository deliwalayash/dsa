#include<iostream>

using namespace std;

template <typename T>
class Collection{
     public:
     int size;
     T arr[];

     void getdata(int idx,T data){
        this->arr[idx]=data;
     }

     Collection(int size){
        this->size=size;
     }

     void showData(){
        for(int i = 0;i <size ; i ++){
            cout << arr[i] << " ";
        }
        cout << endl;
     }
};

int main(){

    int size;

    cout <<"Enter size of array:";
    cin >> size;

    Collection <int> c(size);
    Collection <float> d(size);
    Collection <char> e(size);

   c.getdata(0,12);
   c.getdata(1,13);
   c.getdata(2,14);
   c.getdata(3,15);
   c.getdata(4,16);

   c.showData();

   d.getdata(0,12.2);
   d.getdata(1,13.3);
   d.getdata(2,14.4);
   d.getdata(3,15.5);
   d.getdata(4,16.6);

   d.showData();

     return 0;
}