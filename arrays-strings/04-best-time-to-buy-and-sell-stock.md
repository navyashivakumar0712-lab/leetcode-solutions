# Best Time to Buy and Sell Stock

## Problem
Find the maximum profit from buying and selling a stock.

## Approach
Keep track of the minimum price seen so far.

For every price:
- Update the minimum price if the current price is smaller.
- Calculate the current profit.
- Update the maximum profit if the current profit is larger.

## Example

Input:
[7, 1, 5, 3, 6, 4]

Output:
5

Buy at 1 and sell at 6.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Testing

Test Case 1:
Input: [7, 1, 5, 3, 6, 4]
Output: 5

Test Case 2:
Input: [7, 6, 4, 3, 1]
Output: 0