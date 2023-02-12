#include <iostream>
#include <vector>

using namespace std;

// Function to rotate the matrix by 90 degrees in the clockwise direction
void rotate_matrix(vector<vector<int>> &matrix) {
    int n = matrix.size();
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // Reverse each row of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    rotate_matrix(matrix);
    cout << "The rotated matrix is: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
