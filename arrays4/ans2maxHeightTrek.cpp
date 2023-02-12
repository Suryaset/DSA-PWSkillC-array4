#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  vector<int> height(n);
  for (int i = 0; i < n; i++) {
    cout << "Enter height[" << i << "]: ";
    cin >> height[i];
  }

  int max_height = 0;
  int current_height = 0;
  for (int i = 0; i < n; i++) {
    current_height += height[i];
    max_height = max(max_height, current_height);
  }

  cout << "The highest altitude of a point is: " << max_height << endl;
  return 0;
}
