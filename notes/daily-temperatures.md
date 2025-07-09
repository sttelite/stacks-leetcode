dailyTemperatures
Problem: For each day, find how many days to wait until a warmer temperature.
LeetCode: 739. Daily Temperatures

Approach:

Iterate from right to left using a monotonic stack.

Stack stores pairs of (temperature, index) in decreasing order.

Pop from stack until a warmer day is found.

Difference in indices gives the number of days to wait.

Time complexity: O(n)
Space complexity: O(n) – for the stack and result array