#include<iostream>

using namespace std;

template <typename T>
class Collection{
     public:
     int size;
     T arr[];

     Collection(int size){
        this->size=size;
     }
     void getdata(){
        for(int i = 0;i < size ;i ++){
            cout << "Enter data:";
            cin >> arr[i];
        }
        
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

    // c.getdata();
    // c.showData();

    // d.getdata();
    // d.showData();

    e.getdata();
    e.showData();


     return 0;
}