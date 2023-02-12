#include <iostream>
#include <vector>
#include<climits>

using namespace std;

int max_value_in_2d_matrix(vector<vector<int>> matrix) {
    int max_value = INT_MIN;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
            }
        }
    }
    return max_value;
}

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "The maximum value in the matrix is: " << max_value_in_2d_matrix(matrix) << endl;
    return 0;
}
