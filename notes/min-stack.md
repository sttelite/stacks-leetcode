MinStack
Problem: Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
LeetCode: 155. Min Stack

Approach:

Maintain two stacks: one for all values, one for current minimums.

On push, update the min stack if the value is ≤ current min.

On pop, remove from both stacks if the popped value is the current min.

getMin returns the top of the min stack.

Time complexity: O(1) for all operations
Space complexity: O(n) – for storing values and minimums
