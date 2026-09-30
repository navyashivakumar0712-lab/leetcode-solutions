# Binary Search

## Problem

Given a sorted array of integers, search for a target value and return its index. If the target is not present, return `-1`.

**Difficulty:** Easy

**LeetCode Link:** https://leetcode.com/problems/binary-search/

## Approach

Binary search is used on the sorted array. Two pointers, `left` and `right`, define the search range. The middle element is checked with the target, and half of the search range is eliminated after each comparison.

## Example

**Input:**

```text
[-1, 0, 3, 5, 9, 12]
Target: 9
```

**Output:**

```text
4
```

## Time Complexity

O(log n)

## Space Complexity

O(1)

## Testing

### Test Case 1

**Input:** `[-1, 0, 3, 5, 9, 12]`

**Target:** `9`

**Output:** `4`

### Test Case 2

**Input:** `[-1, 0, 3, 5, 9, 12]`

**Target:** `2`

**Output:** `-1`

## Notes

* Binary search requires the array to be sorted.
* The search range is repeatedly divided into two halves.
* If the target is found, its index is returned.
* If the target is not present, `-1` is returned.
* The program was tested locally in VS Code.
* The solution was submitted and accepted on LeetCode.
