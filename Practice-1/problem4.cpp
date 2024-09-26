// Find the sum of rows and columns of matrix of given order (row x column)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int rows = 3, columns = 3;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Sum of each row:" << endl;
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < columns; ++j) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    cout << "Sum of each column:" << endl;
    for (int j = 0; j < columns; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}