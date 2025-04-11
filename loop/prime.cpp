#include<iostream>

using namespace std;

int main(){
   
    int i,num,flag;

  

    for(num=2;num<=100;num++){
        flag=1;
       {
            for(i=2;i<num;i++)
            {
                if(num % i ==0){
                    flag=0;
                    break;
    
                }
                
            }
        }
    
        if(flag==1)
        {
            cout<< num << " ";
        }
       

    }

   
}
