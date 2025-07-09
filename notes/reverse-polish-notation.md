evalRPN
Problem: Evaluate the value of an arithmetic expression in Reverse Polish Notation (RPN).
LeetCode: 150. Evaluate Reverse Polish Notation

Approach:

Use a stack to process tokens one by one.

Push numbers onto the stack.

On encountering an operator, pop two numbers, apply the operation, and push the result.

Use std::stoi to convert string to integer.

Time complexity: O(n)
Space complexity: O(n) – for the stack used during evaluation