#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char* words[] = {"flower", "flow", "flight"};
    int n = 3;

    char prefix[100];
    strcpy(prefix, words[0]);

    for (int i = 1; i < n; i++) {
        int j = 0;

        while (prefix[j] != '\0' &&
               words[i][j] != '\0' &&
               prefix[j] == words[i][j]) {
            j++;
        }

        prefix[j] = '\0';
    }

    cout << "Longest Common Prefix: " << prefix << endl;

    return 0;
}