🔹 What is Divide and Conquer?
A strategy where:

You Divide the problem into sub-problems.

Conquer each sub-problem recursively.

Combine the solutions to solve the original problem.

🔸 Merge Sort (Recursive Approach)
Concept: Keep dividing the array into halves until you get single-element arrays. Then merge them in sorted order.

Steps:

Divide array into two halves.

Recursively sort both halves.

Merge them into a sorted array.

Time Complexity:

Best, Average, Worst: O(n log n)

Space Complexity: O(n)

🔸 Quick Sort
Concept: Pick a pivot, place it in correct position, and ensure all elements left of it are smaller and right are greater.

Pivot Selection: First, last, middle, or random element.

Steps:

Select a pivot.

Partition array into smaller (left) and larger (right) parts.

Recursively apply quick sort on both parts.

Time Complexity:

Best/Average: O(n log n)

Worst: O(n²) (when pivot is smallest/largest every time)

Space Complexity: O(log n) (for recursion stack)
