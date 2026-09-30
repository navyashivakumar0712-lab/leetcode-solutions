# Valid Anagram

## Problem

Given two strings, determine whether one string is an anagram of the other.

**Difficulty:** Easy

**LeetCode Link:** https://leetcode.com/problems/valid-anagram/

## Approach

First, check whether both strings have the same length. Then sort the characters of both strings and compare them. If the sorted strings are equal, the two strings are anagrams.

## Example

**Input:**

```text
anagram
nagaram
```

**Output:**

```text
true
```

## Time Complexity

O(n log n)

## Space Complexity

O(1)

## Testing

### Test Case 1

**Input:** `anagram`, `nagaram`

**Output:** `true`

### Test Case 2

**Input:** `rat`, `car`

**Output:** `false`

## Notes

* The strings are sorted before comparison.
* If their sorted forms are equal, they are anagrams.
* The program was tested locally in VS Code.
* The solution was submitted and accepted on LeetCode.
