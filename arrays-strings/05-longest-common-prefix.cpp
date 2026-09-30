#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int j = 0;

            while (j < prefix.length() &&
                   j < strs[i].length() &&
                   prefix[j] == strs[i][j]) {
                j++;
            }

            prefix = prefix.substr(0, j);

            if (prefix.empty())
                return "";
        }

        return prefix;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<string> strs1 = {"flower", "flow", "flight"};

    string result1 = solution.longestCommonPrefix(strs1);

    cout << "Test Case 1:" << endl;
    cout << "Input: [flower, flow, flight]" << endl;
    cout << "Output: " << result1 << endl;

    if (result1 == "fl")
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;

    cout << endl;

    // Test Case 2
    vector<string> strs2 = {"dog", "racecar", "car"};

    string result2 = solution.longestCommonPrefix(strs2);

    cout << "Test Case 2:" << endl;
    cout << "Input: [dog, racecar, car]" << endl;
    cout << "Output: " << result2 << endl;

    if (result2 == "")
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;

    return 0;
}