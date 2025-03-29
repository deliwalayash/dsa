#include<iostream>

using namespace std;

int main(){
    
     int size,choice,idx=0;
     cout<< "Enter the size of array:";
     cin >> size;

     int arr[size]={};

     do
     {
        
        cout <<"Enter 1 for Create:" << endl;
        cout <<"Enter 2 for Read:" << endl;
        cout <<"Enter 3 for Update:" << endl;
        cout <<"Enter 4 for Delete:" << endl;
        cout <<"Enter 5 for Exit:" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:

           { 
            cout <<"Enter the data you want to insert:" << endl;
            cin >> arr[idx];
            idx++;
        }
            break;
        
        case 2:
            for(int val:arr){
                cout << val << " ";
            }
            cout << endl;
            break;
            
            
        case 3:
           { int position,data;
            cout <<"Enter position on which you want to updat data" << endl;;   
            cin >> position;
            cout <<"Enter Data you want to update:" << endl;
            cin >> data;
            arr[position]=data;
            cout <<"Your data is updated successfully"<< endl;}
            break;
 
        case 4:
            {
                int position,i;
                cout <<"Enter Position on which you want to delete data:";
                cin >> position;
                arr[position]=0;
                for(i=position;i<size-1;i++){
                    arr[i]=arr[i+1];
                    arr[i+1]=0;
                    
                }
                
                
            }
            break;

        default:
            break;
        }
     } while (choice !=5);
     


}