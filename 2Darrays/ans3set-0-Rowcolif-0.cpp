#include <iostream>
#include <vector>

using namespace std;

// Function to set the complete row and column of a zero element to zero
void set_zero(vector<vector<int>> &matrix) {
    int m = matrix.size(); // number of rows in the matrix
    int n = matrix[0].size(); // number of columns in the matrix
    // Keep track of the rows and columns that have zeros
    vector<bool> row(m, false), col(n, false);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // If a zero is found, mark the corresponding row and column
            if (matrix[i][j] == 0) {
                row[i] = true;
                col[j] = true;
            }
        }
    }
    // Set the complete row and column of a zero element to zero
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // If the row or column has a zero, set the corresponding element to zero
            if (row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    int m, n;
    cout << "Enter the number of rows and columns in the matrix: ";
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    set_zero(matrix);
    cout << "The modified matrix is: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
