#include<iostream>

#include<vector>

using namespace std;

vector <int>biggestadj (vector<int> v1){
    int n = v1.size();
    vector <int> v2;

    for(int i = 1 ; i < n ; i ++){
        if(v1[i] > v1[i-1] && v1[i] > v1[i+1]){
            v2.push_back(v1[i]);
        }
    }
    return v2;
}
int main(){

    int size;
    
    cout <<"Enter size of vector:" ;
    cin>> size;

    vector<int> v1(size);
    vector<int> kech;

    for(int i = 0 ; i < size ; i ++){
        cout << "enter element of vector:";
        cin>> v1[i];
    }

    kech=biggestadj(v1);

    for(int val : kech){
        cout << val <<" ";
    }
    return 0;
}