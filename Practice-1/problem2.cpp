// Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an element from jth position of ‘a1’

#include <bits/stdc++.h>
using namespace std;

void insertElement(vector<int>&arr, int element, int i){
    arr.insert(arr.begin() + i, element);
}

void deleteElement(vector<int>&arr, int j){
    arr.erase(arr.begin() + j);
}

int main(){
    int n;
    cin >> n;
    vector<int> a1(n);
    for(int k = 0; k < n; k++){
        cin >> a1[k];
    }

    int element;
    int i, j;
    cin >> element;
    cin >> i;

    insertElement(a1, element, i);

    cin >> j;

    deleteElement(a1, j);

    for (int k = 0; k < a1.size(); ++k) {
        cout << a1[k] << " ";
    }
    cout << endl;
    
    return 0;
}