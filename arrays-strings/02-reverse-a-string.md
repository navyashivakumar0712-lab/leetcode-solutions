# Reverse a String

## Problem
Reverse the given string.

## Approach
Use two pointers:
- `left` starts from the first character.
- `right` starts from the last character.
- Swap both characters.
- Move `left` forward and `right` backward.

## Example

Input:
hello

Output:
olleh

## Time Complexity
O(n)

## Space Complexity
O(1)

## Testing

Test Case 1:
Input: hello
Output: olleh

Test Case 2:
Input: program
Output: margorp