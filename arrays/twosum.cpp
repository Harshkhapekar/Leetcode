#include <bits/stdc++.h>
using namespace std;

int twosum(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                cout << "Indices found: " << i << " " << j << endl;
                return 1;
            }
        }
    }
    return -1;
}

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    int result = twosum(nums, target);
    if(result == -1)
        cout << "No two elements found with the given sum." << endl;

    return 0;
}
