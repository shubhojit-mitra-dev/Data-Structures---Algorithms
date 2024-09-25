// Find sum of all array elements using recursion.

#include <bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int n){
    if(n == 0){
        return 0;
    }
    return arr[n-1] + sumArray(arr, n-1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum = sumArray(arr, n);
    cout << sum << endl;
    return 0;
}