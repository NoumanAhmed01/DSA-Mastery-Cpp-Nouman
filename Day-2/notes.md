1. Introduction to Control Statements
   Control statements help manage the flow of execution in a program. There are three main types:

1️⃣ Selection Control Statements – Execute based on conditions.
2️⃣ Looping Control Statements – Repeats code until a condition is met.
3️⃣ Jump Statements – Transfers control within a program.

📌 2. Selection Control Statements (Decision Making)
Used to execute a block of code based on a condition.

✅ If-Else Statement

if (condition) {
// Code executes if condition is true
} else {
// Code executes if condition is false
}
✅ If-Else-If Ladder

if (condition1) {
// Executes if condition1 is true
} else if (condition2) {
// Executes if condition2 is true
} else {
// Executes if none of the conditions are true
}
✅ Nested If-Else
One if inside another if.

if (condition1) {
if (condition2) {
// Executes only if both conditions are true
}
}
✅ Ternary Operator (? :) – Shorter way to write if-else.

int num = 10;
string result = (num % 2 == 0) ? "Even" : "Odd";
📌 3. Looping Control Statements (Repetition)
Loops allow code to be executed multiple times.

✅ For Loop – Used when the number of iterations is known.

for (int i = 0; i < 5; i++) {
cout << "Iteration " << i << endl;
}
✅ While Loop – Used when the number of repetitions is unknown.

int i = 0;
while (i < 5) {
cout << "Iteration " << i << endl;
i++;
}
✅ Do-While Loop – Executes at least once, even if the condition is false.

int i = 0;
do {
cout << "Executed once even if condition is false";
} while (i > 5);
📌 When to use While vs. For?

Use for loop when you know the number of iterations.

Use while loop when the loop runs based on a condition.

📌 4. Jump Statements (Control Flow Modification)
✅ Switch Statement – Used when checking multiple conditions.

int choice = 2;
switch (choice) {
case 1: cout << "Option 1"; break;
case 2: cout << "Option 2"; break;
default: cout << "Invalid option";
}
✅ Break Statement – Exits a loop or switch case.

for (int i = 0; i < 5; i++) {
if (i == 3) break; // Stops loop when i == 3
cout << i << endl;
}
✅ Continue Statement – Skips the current iteration and continues the loop.

for (int i = 0; i < 5; i++) {
if (i == 3) continue; // Skips iteration when i == 3
cout << i << endl;
}
✅ Goto Statement – Jumps to a specific label. (Not recommended)

int x = 1;
start:
cout << x << endl;
x++;
if (x <= 5) goto start; // Jumps back to start
