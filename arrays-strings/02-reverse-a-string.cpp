#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseString(string& s) {
        reverse(s.begin(), s.end());
    }
};

int main() {
    Solution solution;

    // Test Case 1
    string s1 = "hello";
    solution.reverseString(s1);

    cout << "Test Case 1:" << endl;
    cout << "Output: " << s1 << endl;

    if (s1 == "olleh")
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;

    cout << endl;

    // Test Case 2 - Edge Case
    string s2 = "a";
    solution.reverseString(s2);

    cout << "Test Case 2:" << endl;
    cout << "Output: " << s2 << endl;

    if (s2 == "a")
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;

    return 0;
}