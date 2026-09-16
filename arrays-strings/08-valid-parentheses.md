# Valid Parentheses

## Problem
Check whether the brackets in a string are correctly matched and properly ordered.

## Approach
Use a stack.

- Push every opening bracket onto the stack.
- For every closing bracket, check the top opening bracket.
- If they match, remove the opening bracket.
- If they do not match, the string is invalid.
- At the end, the stack must be empty.

## Example

Input:
"({[]})"

Output:
true

## Time Complexity
O(n)

## Space Complexity
O(n)

## Testing

Test Case 1:
Input: "({[]})"
Output: Valid Parentheses

Test Case 2:
Input: "([)]"
Output: Invalid Parentheses