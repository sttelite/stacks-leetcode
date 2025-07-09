carFleet
Problem: Count the number of car fleets that will arrive at a destination given positions and speeds.
LeetCode: 853. Car Fleet

Approach:

Calculate time each car takes to reach the target.

Sort cars by starting position in ascending order.

Iterate from right to left, forming a new fleet when a car takes more time than the fleet ahead.

Time complexity: O(n log n) – due to sorting
Space complexity: O(n) – for storing car info