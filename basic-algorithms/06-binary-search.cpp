#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 3, 5, 7, 9};
    int n = 5;
    int target = 7;

    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            break;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "Index: " << result << endl;

    return 0;
}