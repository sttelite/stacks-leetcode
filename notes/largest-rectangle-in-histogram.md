largestRectangleArea
Problem: Find the area of the largest rectangle in a histogram.
LeetCode: 84. Largest Rectangle in Histogram

Approach:

Use a monotonic increasing stack to track indices of bars.

For each bar, calculate area when the current height is less than the stack top.

Append a zero to flush the stack at the end.

Width is determined by current index and the index below the top of the stack.

Time complexity: O(n)
Space complexity: O(n) – for the stack