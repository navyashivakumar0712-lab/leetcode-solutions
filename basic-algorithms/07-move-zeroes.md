# Move Zeroes

## Problem

Given an integer array, move all `0`s to the end of the array while maintaining the relative order of the non-zero elements.

**Difficulty:** Easy

**LeetCode Link:** https://leetcode.com/problems/move-zeroes/

## Approach

Traverse the array and place each non-zero element at the next available position. After all non-zero elements are placed, fill the remaining positions with `0`s.

## Example

**Input:**
[0, 1, 0, 3, 12]

**Output:**
[1, 3, 12, 0, 0]

## Time Complexity

O(n)

## Space Complexity

O(1)

## Testing

### Test Case 1

**Input:** `[0, 1, 0, 3, 12]`

**Output:** `[1, 3, 12, 0, 0]`

**Result:** PASS

### Test Case 2

**Input:** `[0, 0, 1]`

**Output:** `[1, 0, 0]`

**Result:** PASS

## Notes

* All zeroes are moved to the end of the array.
* The relative order of non-zero elements is maintained.
* The array is modified in-place.
* The program was tested locally in VS Code.
* The solution was submitted and accepted on LeetCode.
