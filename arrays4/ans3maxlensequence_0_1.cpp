#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int maxLength(vector<int>& arr) {
    int n = arr.size();
    int zeros = 0, ones = 0, max_len = 0;
    for (int i = 0, j = 0; i < n && j < n;) {
        if (zeros == ones) {
            max_len = max(max_len, j - i);
            if (arr[j++] == 0) {
                zeros++;
            } else {
                ones++;
            }
        } else if (zeros < ones) {
            if (arr[i++] == 0) {
                zeros++;
            }
        } else {
            if (arr[j++] == 1) {
                ones++;
            }
        }
    }
    return max_len;
}

int main() {
    vector<int> arr = {0, 1, 1, 0, 1,1, 1};
    cout << maxLength(arr) << endl;
    return 0;
}
// Explanation:

// The zeros and ones variables keep track of the count of 0s and 1s in the current sequence.
// The two pointers i and j traverse the array and maintain the sequence.
// If zeros == ones, we update the max_len and move the j pointer one step ahead.
// If zeros < ones, we move the i pointer one step ahead to shorten the sequence.
// If zeros > ones, we move the j pointer one step ahead to extend the sequence.