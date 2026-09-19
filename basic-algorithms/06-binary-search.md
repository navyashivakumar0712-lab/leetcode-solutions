# Binary Search

## Problem
Find the position of a target value in a sorted array.

## Approach
Use two pointers:
- `left` points to the first index.
- `right` points to the last index.
- Find the middle index.
- If the middle value is the target, return its index.
- If the middle value is smaller than the target, search the right half.
- Otherwise, search the left half.

If the target is not found, return `-1`.

## Example

Input:
nums = [1, 3, 5, 7, 9]
target = 7

Output:
3

## Time Complexity
O(log n)

## Space Complexity
O(1)

## Testing

Test Case 1:
Input: [1, 3, 5, 7, 9], target = 7
Output: 3

Test Case 2:
Input: [1, 3, 5, 7, 9], target = 6
Output: -1