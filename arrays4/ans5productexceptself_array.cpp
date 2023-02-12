#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);
    
    int left = 1;
    for (int i = 0; i < n; i++) {
        ans[i] *= left;
        left *= nums[i];
    }
    
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= right;
        right *= nums[i];
    }
    
    return ans;
}

int main() {
    vector<int> nums = {1, 3, 5, 7};
    vector<int> ans = productExceptSelf(nums);
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
