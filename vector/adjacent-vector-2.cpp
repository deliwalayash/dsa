#include<iostream>

#include<vector>

using namespace std;

vector<int> small(vector<int>&v1){
    vector <int> v2;

    int i;
    for(i = 1 ; i < v1.size() ; i ++){

        if( v1[i] < v1[i-1] && v1[i] < v1[i+1]){
            v2.push_back(v1[i]);
        }
    }

    return  v2;

}

int main(){
   
    int n,i;
    cout <<"Enter size of Vector:";
    cin >> n;
    vector <int> v1(n);
    vector<int> ans;

    for(i = 0;i < n ; i ++){
        cout <<"enter elements of vector:";
        cin >> v1[i];
    }

    ans=small(v1);

    for(int val:ans){
        cout << val <<" ";
    }




    return 0;
}