📦 1. Vectors in C++ (Dynamic Arrays)
A vector is part of the STL (Standard Template Library).

It works like a dynamic array that:

Can resize automatically.

Stores elements contiguously in memory.

Includes powerful in-built functions like push_back(), pop_back(), size(), capacity(), begin(), end(), etc.

#include <vector>
vector<int> v;
v.push_back(1); // Adds element at end
v.pop_back(); // Removes last element

🔁 When capacity is exceeded, vector creates a new memory block (double the size) and copies the old data — that's why it's dynamic!

💡 Vectors vs Arrays
Feature Array Vector
Size Fixed Dynamic
Memory Stack/Heap Heap (usually)
Safety Low High (safe ops)
Flexibility Low High

⚙️ 2. Bit Manipulation
Bit manipulation allows you to perform operations directly on the binary bits of a number — super useful in low-level programming, optimization, and coding interviews.

🔧 Common Bitwise Operators:
Operator Meaning Example (x=5, y=3)
& AND x & y = 1
`	` OR
^ XOR x ^ y = 6
~ NOT (1's comp) ~x = -6
<< Left Shift x << 1 = 10

> >     Right Shift	x >> 1 = 2

🔍 Useful Bit Functions
Check if ith bit is set: (num & (1 << i))

Set ith bit: num | (1 << i)

Unset ith bit: num & ~(1 << i)

Toggle ith bit: num ^ (1 << i)

Count set bits: \_\_builtin_popcount(num)
