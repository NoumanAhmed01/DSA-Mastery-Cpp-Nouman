📌 1. Importance of Pattern Printing
Pattern printing using loops is one of the best ways to build logic as a beginner. It helps improve:
✔️ Understanding of loops (nested loops)
✔️ Problem-solving skills
✔️ Logic-building ability

📌 2. Understanding Nested Loops
A nested loop is a loop inside another loop. It is commonly used to print patterns in C++.

✅ Example: Basic Nested Loop

for (int i = 1; i <= 3; i++) { // Outer loop (rows)
for (int j = 1; j <= 3; j++) { // Inner loop (columns)
cout << "\* ";  
 }
cout << endl;  
}

Here, the outer loop controls the number of rows, and the inner loop controls the number of columns.

📌 3. Popular Star Patterns in C++
🔹 Half Pyramid

for (int i = 1; i <= 5; i++) {
for (int j = 1; j <= i; j++) {
cout << "\* ";
}
cout << endl;
}

🔹 Inverted Half Pyramid

for (int i = 5; i >= 1; i--) {
for (int j = 1; j <= i; j++) {
cout << "\* ";
}
cout << endl;
}

- 🔹 Full Pyramid

for (int i = 1; i <= 5; i++) {
for (int j = 1; j <= 5 - i; j++) cout << " "; // Spaces
for (int k = 1; k <= 2 _ i - 1; k++) cout << "_"; // Stars
cout << endl;
}

🔹 Diamond Pattern

int n = 5;
for (int i = 1; i <= n; i++) {
for (int j = i; j < n; j++) cout << " ";
for (int j = 1; j <= (2 _ i - 1); j++) cout << "_";
cout << endl;
}
for (int i = n - 1; i >= 1; i--) {
for (int j = n; j > i; j--) cout << " ";
for (int j = 1; j <= (2 _ i - 1); j++) cout << "_";
cout << endl;
}

🔹 Butterfly Pattern

int n = 4;
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= i; j++) cout << "_";
for (int j = 1; j <= 2 _ (n - i); j++) cout << " ";
for (int j = 1; j <= i; j++) cout << "_";
cout << endl;
}
for (int i = n; i >= 1; i--) {
for (int j = 1; j <= i; j++) cout << "_";
for (int j = 1; j <= 2 _ (n - i); j++) cout << " ";
for (int j = 1; j <= i; j++) cout << "_";
cout << endl;
}

🔹 Palindromic Number Pyramid

for (int i = 1; i <= 5; i++) {
for (int j = 5; j > i; j--) cout << " ";
for (int j = i; j >= 1; j--) cout << j;
for (int j = 2; j <= i; j++) cout << j;
cout << endl;
}
