🔹 What is a Trie?
A Trie (pronounced “try”) is a tree-like data structure that stores strings. It avoids storing duplicate prefixes, which makes it memory efficient for handling lots of words with common roots.

🔹 Key Concepts:
Each node represents a character.

The root node is empty.

Paths from root to leaves form words.

Common prefixes are stored once, which saves space.

🔹 Key Operations:
Operation Time Complexity
Insert O(L)
Search O(L)
Starts With (prefix) O(L)
Delete Word O(L)

Here, L is the length of the word.

🔹 Applications:
🔍 Auto-complete

🔐 Spell-checkers

🔤 Dictionary word lookups

📚 IP routing (as prefix matching)
