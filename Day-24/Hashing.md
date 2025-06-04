🔹 What is Hashing?
Hashing is a technique to map data (like strings, numbers) to a fixed-size value using a hash function. It is used to store and retrieve data efficiently.

🔹 Key Concepts:
Hash Function: Converts data into a unique index/key.

Hash Table: Stores data at the index returned by the hash function.

Collision: When two keys hash to the same index. Solved using:

Chaining (linked list at each index)

Open Addressing (find next available slot)

🔹 C++ STL Containers for Hashing:
unordered_map → Key-value pairs with O(1) average case time.

unordered_set → Unique keys, no values.

map & set → Sorted versions (but use BST, not hash tables).

🔹 Time Complexity:
Operation unordered_map map
Insert O(1) avg O(log n)
Search O(1) avg O(log n)
Delete O(1) avg O(log n)
