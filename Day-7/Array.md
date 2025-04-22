✅ Day 7 Notes: Arrays – Part 1 (Revision Ready)
🔹 What is an Array?
An array is a derived data type.

It stores multiple elements of the same data type in a contiguous memory block.

It uses indexing (starting from 0) to access elements.

Memory is allocated statically (at compile time).

🔹 Input/Output with Arrays
You can use loops (for, while) to take input/output for arrays efficiently.

🔹 Types of Searches in Array
Linear Search:

Works on both sorted and unsorted arrays.

Checks each element sequentially.

Binary Search:

Only works on sorted arrays.

Uses divide and conquer to reduce search space.

🔹 Array & Memory
Arrays are also called constant pointers.

You cannot reassign the base address of the array.

🔹 Pointer Arithmetic with Arrays
When you do ptr + i, it doesn’t add just 1—it adds i \* sizeof(datatype).

Example: ptr + 3 → skips 3 integers = adds 3 \* 4 bytes = 12 bytes

Addition of two pointers ❌ Invalid.

Subtraction of two pointers ✅ Valid (if both point to same array type).

📌 1. Print All Subarrays of an Array
A subarray is a contiguous part of an array.

For an array of size n, total subarrays = n(n+1)/2.

Use 2 nested loops to print all subarrays.

cpp
Copy
Edit
for (int i = 0; i < n; i++) {
for (int j = i; j < n; j++) {
for (int k = i; k <= j; k++) {
cout << arr[k] << " ";
}
cout << endl;
}
}
📌 2. Maximum Subarray Sum
✅ Solved using three approaches:

a. Brute Force (O(n³)) – Check all subarrays and sum them.

b. Optimized (O(n²)) – Avoid redundant additions by keeping a running sum.

c. Kadane’s Algorithm (O(n)) – ✅ Most Efficient
✔️ Logic:

Keep a running sum (currSum).

If currSum < 0, reset it to 0.

Keep track of maxSum during the iteration.

cpp
Copy
Edit
int maxSubarraySum(int arr[], int n) {
int currSum = 0, maxSum = INT_MIN;
for (int i = 0; i < n; i++) {
currSum += arr[i];
maxSum = max(maxSum, currSum);
if (currSum < 0) currSum = 0;
}
return maxSum;
}
📌 3. Buy and Sell Stocks – Max Profit
Goal: Buy on a low day, sell on a high day after it.

Track minPrice and maxProfit.

cpp
Copy
Edit
int maxProfit(vector<int> &prices) {
int minPrice = INT_MAX, maxProfit = 0;
for (int price : prices) {
minPrice = min(minPrice, price);
maxProfit = max(maxProfit, price - minPrice);
}
return maxProfit;
}
📌 4. Trapping Rain Water Problem
For each block, water trapped = min(maxLeft, maxRight) - height[i]

Use precomputed leftMax[] and rightMax[] arrays.

cpp
Copy
Edit
int trap(vector<int>& height) {
int n = height.size();
vector<int> leftMax(n), rightMax(n);

    leftMax[0] = height[0];
    for (int i = 1; i < n; i++)
        leftMax[i] = max(height[i], leftMax[i-1]);

    rightMax[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--)
        rightMax[i] = max(height[i], rightMax[i+1]);

    int water = 0;
    for (int i = 0; i < n; i++)
        water += min(leftMax[i], rightMax[i]) - height[i];

    return water;

}
