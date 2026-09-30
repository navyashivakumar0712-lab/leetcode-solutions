# Two Sum

**Difficulty:** Easy

**LeetCode Link:** https://leetcode.com/problems/two-sum/

## Approach

We use two nested loops to check every possible pair of elements in the array. If the sum of two elements is equal to the target, their indices are returned.

## Complexity

* **Time Complexity:** O(n²)
* **Space Complexity:** O(1)

## Notes

* The first loop selects the first element of the pair.
* The second loop checks the elements after it.
* We return the indices as soon as a valid pair is found.
* If no valid pair is found, an empty vector is returned.
* The program was tested locally using test cases in VS Code.
* The solution was also submitted and accepted on LeetCode.
