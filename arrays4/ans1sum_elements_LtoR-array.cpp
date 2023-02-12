#include <iostream>
#include <vector>
using namespace std;

int sum_of_elements(vector<int>& arr, int L, int R) {
    int sum = 0;
    for (int i = L-1; i <= R-1; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int L, R;
    cout << "Enter the values of L and R: ";
    cin >> L >> R;

    cout << "The sum of elements between indices " << L << " and " << R << " is: " << sum_of_elements(arr, L, R) << endl;
    return 0;
}
