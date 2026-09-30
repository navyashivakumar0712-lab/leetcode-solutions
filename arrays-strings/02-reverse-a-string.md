# Reverse a String

## Problem

Reverse the given string.

**Difficulty:** Easy

**LeetCode Link:** https://leetcode.com/problems/reverse-string/

## Approach

Use two pointers:

* `left` starts from the first character.
* `right` starts from the last character.
* Swap both characters.
* Move `left` forward and `right` backward.
* Continue until `left` and `right` meet.

## Example

**Input:**

```text
hello
```

**Output:**

```text
olleh
```

## Time Complexity

O(n)

## Space Complexity

O(1)

## Testing

### Test Case 1

**Input:** `hello`

**Output:** `olleh`

### Test Case 2

**Input:** `program`

**Output:** `margorp`

## Notes

* The string is reversed in-place.
* Two pointers are used to avoid creating another string.
* The program was tested locally in VS Code.
* The solution was submitted and accepted on LeetCode.
