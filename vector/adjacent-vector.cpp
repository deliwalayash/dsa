#include <iostream>
#include <vector>

using namespace std;

vector<int> adjacentelement(vector<int>&);

int main()
{
    int n;
    vector<int> kech;

    cout << "Enter N :";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cout << "enter the value :";
        cin >> arr[i];
    }

    kech = adjacentelement(arr);

    for(int val : kech){
        cout << val << " ";
    }

    return 0;
}

vector<int> adjacentelement(vector<int>& arr){
    vector<int> ans;

    for(int i = 1; i < arr.size() - 1; i++){
        if(arr[i] < arr[i - 1] && arr[i] < arr[i + 1]){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}