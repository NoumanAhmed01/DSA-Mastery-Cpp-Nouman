📌 What is Recursion?

Recursion is when a function calls itself to solve smaller instances of the same problem.

It breaks down a complex problem into simpler sub-problems.

🔁 Key Components of Recursion:

Recursive Case: The part where the function calls itself.

Base Case: The stopping condition that prevents infinite recursion.

📉 Importance of Base Case:

Without a base case, the function keeps calling itself, leading to:

Stack Overflow

Segmentation Fault (if local memory is overused)

📦 Memory Use:

Each recursive call adds a new frame to the call stack.

More local variables = more memory used = risk of overflow.

⚠️ Common Errors:

Missing base case.

Using unnecessary local variables.

Calling recursion on the wrong logic flow.
