# Valid Parentheses

## Problem

Given a string containing parentheses, determine whether the brackets are valid and correctly matched.

**Difficulty:** Easy

**LeetCode Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

A stack is used to keep track of opening brackets. When a closing bracket is encountered, it is compared with the most recent opening bracket. The string is valid only if all brackets are correctly matched and the stack is empty at the end.

## Example

**Input:**
()[]{}

**Output:**
true

## Time Complexity

O(n)

## Space Complexity

O(n)

## Testing

### Test Case 1

**Input:** `()[]{}`

**Output:** `true`

**Result:** PASS

### Test Case 2

**Input:** `(]`

**Output:** `false`

**Result:** PASS

## Notes

* A stack is used to store opening brackets.
* Each closing bracket is matched with the corresponding opening bracket.
* An invalid or mismatched bracket returns `false`.
* The program was tested locally in VS Code.
* The solution was submitted and accepted on LeetCode.
