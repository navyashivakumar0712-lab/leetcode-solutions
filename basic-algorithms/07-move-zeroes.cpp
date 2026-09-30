#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[index] = nums[i];
                index++;
            }
        }

        while (index < nums.size()) {
            nums[index] = 0;
            index++;
        }
    }
};

void printArray(const vector<int>& nums) {
    cout << "[";
    
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        
        if (i != nums.size() - 1) {
            cout << ", ";
        }
    }
    
    cout << "]";
}

int main() {
    Solution solution;

    vector<int> nums1 = {0, 1, 0, 3, 12};

    cout << "Test Case 1:" << endl;
    cout << "Input: ";
    printArray(nums1);
    cout << endl;

    solution.moveZeroes(nums1);

    cout << "Output: ";
    printArray(nums1);
    cout << endl;

    vector<int> expected1 = {1, 3, 12, 0, 0};

    if (nums1 == expected1) {
        cout << "PASS" << endl;
    } else {
        cout << "FAIL" << endl;
    }

    cout << endl;

    vector<int> nums2 = {0, 0, 1};

    cout << "Test Case 2:" << endl;
    cout << "Input: ";
    printArray(nums2);
    cout << endl;

    solution.moveZeroes(nums2);

    cout << "Output: ";
    printArray(nums2);
    cout << endl;

    vector<int> expected2 = {1, 0, 0};

    if (nums2 == expected2) {
        cout << "PASS" << endl;
    } else {
        cout << "FAIL" << endl;
    }

    return 0;
}