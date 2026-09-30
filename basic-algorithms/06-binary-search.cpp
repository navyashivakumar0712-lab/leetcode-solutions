#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;

    int result1 = solution.search(nums1, target1);

    cout << "Test Case 1:" << endl;
    cout << "Input: [-1, 0, 3, 5, 9, 12]" << endl;
    cout << "Target: 9" << endl;
    cout << "Output: " << result1 << endl;

    if (result1 == 4) {
        cout << "PASS" << endl;
    }
    else {
        cout << "FAIL" << endl;
    }

    cout << endl;

    // Test Case 2
    vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;

    int result2 = solution.search(nums2, target2);

    cout << "Test Case 2:" << endl;
    cout << "Input: [-1, 0, 3, 5, 9, 12]" << endl;
    cout << "Target: 2" << endl;
    cout << "Output: " << result2 << endl;

    if (result2 == -1) {
        cout << "PASS" << endl;
    }
    else {
        cout << "FAIL" << endl;
    }

    return 0;
}