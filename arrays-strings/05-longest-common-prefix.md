# Longest Common Prefix

## Problem

Given an array of strings, find the longest common prefix shared by all the strings.

**Difficulty:** Easy

**LeetCode Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach

Take the first string as the initial prefix and compare it with each of the remaining strings. Character-by-character comparison is performed, and the prefix is shortened whenever a mismatch occurs.

## Example

**Input:**

```text
[flower, flow, flight]
```

**Output:**

```text
fl
```

## Time Complexity

O(n × m)

Where `n` is the number of strings and `m` is the length of the shortest string.

## Space Complexity

O(1)

## Testing

### Test Case 1

**Input:** `[flower, flow, flight]`

**Output:** `fl`

### Test Case 2

**Input:** `[dog, racecar, car]`

**Output:** `""` (empty string)

## Notes

* The first string is initially considered the common prefix.
* The prefix is compared with each remaining string.
* The prefix is shortened when characters do not match.
* The program was tested locally in VS Code.
* The solution was submitted and accepted on LeetCode.
