📘 Day 9 Notes – Sorting Algorithms in C++
Sorting is the process of arranging data in a particular format (ascending or descending). It's essential for search efficiency and data organization.

✅ 1. Bubble Sort
Repeatedly swaps adjacent elements if they are in the wrong order.

Time Complexity: O(n²)

Best for small datasets.

for (int i = 0; i < n-1; i++) {
for (int j = 0; j < n-i-1; j++) {
if (arr[j] > arr[j+1]) {
swap(arr[j], arr[j+1]);
}
}
}

✅ 2. Selection Sort
Finds the minimum element from the unsorted part and places it at the beginning.

Time Complexity: O(n²)

Simple and good for understanding sorting logic.

for (int i = 0; i < n-1; i++) {
int minIndex = i;
for (int j = i+1; j < n; j++) {
if (arr[j] < arr[minIndex]) {
minIndex = j;
}
}
swap(arr[i], arr[minIndex]);
}

✅ 3. Insertion Sort
Inserts an element from the unsorted array into its correct position in the sorted part.

Time Complexity: O(n²), but efficient for nearly sorted data.

for (int i = 1; i < n; i++) {
int key = arr[i];
int j = i - 1;
while (j >= 0 && arr[j] > key) {
arr[j + 1] = arr[j];
j--;
}
arr[j + 1] = key;
}

✅ 4. Counting Sort
Works by counting frequency of each element.

Only works for non-negative integers.

Time Complexity: O(n + k), where k = range of input.

// Logic: Count frequency → Prefix sum → Place elements in output array
