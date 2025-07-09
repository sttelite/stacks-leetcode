generateParenthesis
Problem: Generate all combinations of well-formed parentheses for n pairs.
LeetCode: 22. Generate Parentheses

Approach:

Use backtracking to explore all valid combinations.

Add '(' if open count is less than n.

Add ')' if close count is less than open.

Stop when the current string length is 2 * n.

Time complexity: O(4ⁿ / √n)
Space complexity: O(4ⁿ / √n)