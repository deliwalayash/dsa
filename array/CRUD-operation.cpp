#include<iostream>

using namespace std;

int main(){


    int size,choice,idx=0;

    cout <<"Enter size of Array:";
    cin >> size;

    int arr[size]={};

    do
    {

        cout <<"Enter 1 for Creat:" << endl;
        cout <<"Enter 2 for Read:" << endl;
        cout <<"Enter 3 for Update:" << endl;
        cout <<"Enter 4 for Delete:" << endl;
        cout <<"Enter 5 for Exit:" << endl;
       
        cin >> choice;

        switch (choice)
        {
        case 1:{
            int data;
            if(idx == size){
                cout <<"array is full-please update size of array" << endl; 
                break;
            }
            cout<<"Enter the data:";
            cin >> data;
            arr[idx] = data;
            idx++;
            cout <<"data successfully inserted:" << endl;
            break;            
        }
        case 2:{
            for(int val:arr){
                cout << val <<" ";
            }
            cout << endl;
            break;            
        }
        case 3:{
            int index,data;
            cout <<"Inter Index you want to update:";
            cin >> index;
            cout <<"Enter data you want to update:";
            cin >> data;
            arr[index]=data;
            cout <<"Data Updated successful" << endl;
            break;            
        }
        case 4:{
            int index, i;
            cout <<"Inter Index you want to delete";
            cin >> index;
            arr[index]=0;
            cout <<"Data Deleted successful" << endl;
            for(i = index; i < size - 1; i++){
                arr[i] = arr[i+1];
            }
            arr[i] = 0;
            idx--;
            break;                   
        }
        case 5:{
            cout << "Thank You Visit Again";
            break;            
        }   
        default:
            cout << "---------------------------------" << endl;
            cout << "Enter a valide choice : ";
            cout << "---------------------------------" << endl << endl;
        }
    } while (choice != 5);
    
    return 0;
}