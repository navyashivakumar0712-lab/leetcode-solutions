# Longest Common Prefix

## Problem
Find the longest common starting part of all given strings.

## Approach
Take the first word as the initial prefix.

Compare it with every other word. Keep only the characters that match at the beginning.

If no characters match, return an empty string.

## Example

Input:
["flower", "flow", "flight"]

Output:
"fl"

## Time Complexity
O(n × m)

## Space Complexity
O(m)

## Testing

Test Case 1:
Input: ["flower", "flow", "flight"]
Output: "fl"

Test Case 2:
Input: ["dog", "racecar", "car"]
Output: ""