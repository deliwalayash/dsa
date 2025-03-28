#include<iostream>

using namespace std;

int main(){


    int year,leaparr[100],index=0,start,end,i;

    cout <<"Enter Start and End Year:";

    cin >> start >> end;

    for(i=start;i<=end;i++)
{
    if( (i % 4 ==0) && (i % 100 !=0) || (i % 400==0) ){
        
        leaparr[index]=i;
        index++;
    }
}
    

  for(i=0;i<index;i++){
    cout << leaparr[i] << "  ";
  }

    cout <<"The number of leap year is:" << index;
}