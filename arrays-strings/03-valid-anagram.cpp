#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    string s1 = "anagram";
    string t1 = "nagaram";

    bool result1 = solution.isAnagram(s1, t1);

    cout << "Test Case 1:" << endl;
    cout << "Input: " << s1 << ", " << t1 << endl;
    cout << "Output: " << (result1 ? "true" : "false") << endl;

    if (result1 == true)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;

    cout << endl;

    // Test Case 2 - Edge Case
    string s2 = "rat";
    string t2 = "car";

    bool result2 = solution.isAnagram(s2, t2);

    cout << "Test Case 2:" << endl;
    cout << "Input: " << s2 << ", " << t2 << endl;
    cout << "Output: " << (result2 ? "true" : "false") << endl;

    if (result2 == false)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;

    return 0;
}