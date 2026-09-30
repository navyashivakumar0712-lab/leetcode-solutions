#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                if (st.empty()) {
                    return false;
                }

                char top = st.top();
                st.pop();

                if (c == ')' && top != '(') {
                    return false;
                }

                if (c == '}' && top != '{') {
                    return false;
                }

                if (c == ']' && top != '[') {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main() {
    Solution solution;

    // Test Case 1
    string s1 = "()[]{}";
    bool result1 = solution.isValid(s1);

    cout << "Test Case 1:" << endl;
    cout << "Input: " << s1 << endl;
    cout << "Output: " << (result1 ? "true" : "false") << endl;

    if (result1) {
        cout << "PASS" << endl;
    }
    else {
        cout << "FAIL" << endl;
    }

    cout << endl;

    // Test Case 2
    string s2 = "(]";
    bool result2 = solution.isValid(s2);

    cout << "Test Case 2:" << endl;
    cout << "Input: " << s2 << endl;
    cout << "Output: " << (result2 ? "true" : "false") << endl;

    if (!result2) {
        cout << "PASS" << endl;
    }
    else {
        cout << "FAIL" << endl;
    }

    return 0;
}