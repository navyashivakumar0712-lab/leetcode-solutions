#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};

int main() {

    Solution s;

    // Test Case 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;

    vector<int> result1 = s.twoSum(nums1, target1);

    cout << "Test Case 1:" << endl;
    cout << "Output: [" << result1[0] << ", " << result1[1] << "]" << endl;

    if (result1[0] == 0 && result1[1] == 1)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;


    // Test Case 2
    vector<int> nums2 = {3, 3};
    int target2 = 6;

    vector<int> result2 = s.twoSum(nums2, target2);

    cout << "\nTest Case 2:" << endl;
    cout << "Output: [" << result2[0] << ", " << result2[1] << "]" << endl;

    if (result2[0] == 0 && result2[1] == 1)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;

    return 0;
}