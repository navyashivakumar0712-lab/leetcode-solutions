#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "hello";

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }

    cout << "Reversed string: " << s << endl;

    return 0;
}