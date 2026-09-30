#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            maxProfit = max(maxProfit, prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};

    int result1 = solution.maxProfit(prices1);

    cout << "Test Case 1:" << endl;
    cout << "Input: [7, 1, 5, 3, 6, 4]" << endl;
    cout << "Output: " << result1 << endl;

    if (result1 == 5)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;

    cout << endl;

    // Test Case 2
    vector<int> prices2 = {7, 6, 4, 3, 1};

    int result2 = solution.maxProfit(prices2);

    cout << "Test Case 2:" << endl;
    cout << "Input: [7, 6, 4, 3, 1]" << endl;
    cout << "Output: " << result2 << endl;

    if (result2 == 0)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;

    return 0;
}