# Valid Anagram

## Problem
Check whether two strings contain the same letters with the same frequency.

## Approach
Use an array of size 26 to count lowercase English letters.

Increase the count for characters in the first string and decrease the count for characters in the second string.

If all counts become zero, the strings are anagrams.

## Example

Input:
s = "listen"
t = "silent"

Output:
true

## Time Complexity
O(n)

## Space Complexity
O(1)

## Testing

Test Case 1:
Input: listen, silent
Output: Anagram

Test Case 2:
Input: hello, world
Output: Not an Anagram