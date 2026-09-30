# Best Time to Buy and Sell Stock

## Problem

Given an array of stock prices, find the maximum profit that can be achieved by buying on one day and selling on a later day.

**Difficulty:** Easy

**LeetCode Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

Keep track of the minimum stock price seen so far. For each price, calculate the possible profit by selling at that price and update the maximum profit. This allows the maximum profit to be found in a single pass through the array.

## Example

**Input:**

```text
[7, 1, 5, 3, 6, 4]
```

**Output:**

```text
5
```

## Time Complexity

O(n)

## Space Complexity

O(1)

## Testing

### Test Case 1

**Input:** `[7, 1, 5, 3, 6, 4]`

**Output:** `5`

### Test Case 2

**Input:** `[7, 6, 4, 3, 1]`

**Output:** `0`

## Notes

* The minimum price is tracked while traversing the array.
* The maximum possible profit is updated at each step.
* If the prices continuously decrease, the maximum profit is `0`.
* The program was tested locally in VS Code.
* The solution was submitted and accepted on LeetCode.
