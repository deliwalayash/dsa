#include<iostream>

using namespace std;

int main(){

    int start,end;

    cout << " Enter Range :";
    cin >> start >> end;

    if(start % 4 == 0){
        for(int i = start;i <=end ; i++){
            if( (i % 4 ==0) && (i % 100 !=0) || (i % 400==0) ){
        
                cout << i << " ";
            }
        
        }
    }else{
        int rem = start % 4;
        int ans = 4 - rem;
        start = start + ans;
        for(int i = start;i <=end ; i++){
            if( (i % 4 ==0) && (i % 100 !=0) || (i % 400==0) ){
        
                cout << i << " ";
            }
        
        }
        

    }

    return 0;

}