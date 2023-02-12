#include <iostream>
#include<vector>

using namespace std;

int countSequencesWithOddSum(vector<int>& arr) {
    int n = arr.size();
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum % 2 == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1,2, 3, 5};
    cout << countSequencesWithOddSum(arr) << endl;
    return 0;
}
