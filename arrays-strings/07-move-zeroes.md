# Move Zeroes

## Problem
Move all zeroes to the end of the array while maintaining the order of non-zero elements.

## Approach
Use a variable called `position`.

First, copy all non-zero elements to the beginning of the array.

Then fill the remaining positions with zeroes.

## Example

Input:
[0, 1, 0, 3, 12]

Output:
[1, 3, 12, 0, 0]

## Time Complexity
O(n)

## Space Complexity
O(1)

## Testing

Test Case 1:
Input: [0, 1, 0, 3, 12]
Output: [1, 3, 12, 0, 0]

Test Case 2:
Input: [1, 0, 2, 0, 3]
Output: [1, 2, 3, 0, 0]