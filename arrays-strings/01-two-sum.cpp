
#include <iostream>
using namespace std;

void twoSum(int nums[], int n, int target, int result[]) {

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }

    result[0] = -1;
    result[1] = -1;
}

int main() {

    int nums[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    int result[2];

    twoSum(nums, n, target, result);

    cout << "[" << result[0] << ", " << result[1] << "]";

    return 0;
}