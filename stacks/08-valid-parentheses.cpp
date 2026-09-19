#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "([)]";

    char stack[100];
    int top = -1;
    bool valid = true;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            top++;
            stack[top] = ch;
        }
        else {
            if (top == -1) {
                valid = false;
                break;
            }

            char open = stack[top];
            top--;

            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{')) {
                valid = false;
                break;
            }
        }
    }

    if (top != -1) {
        valid = false;
    }

    if (valid) {
        cout << "Valid Parentheses" << endl;
    }
    else {
        cout << "Invalid Parentheses" << endl;
    }

    return 0;
}