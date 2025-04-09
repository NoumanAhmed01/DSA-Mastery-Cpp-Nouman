🔹 What is a Function?
A function is a block of code that runs when it is called.

Helps in code reuse and modular programming.

🔹 Function Declaration
Declared before main() with:

Return Type (e.g., int, void)

Function Name

Parameters (if any)

int sum(int a, int b); // Declaration

🔹 Function Definition & Calling
Definition: Actual block of logic.

Call: When the function is triggered to run.

int sum(int a, int b) {
return a + b;
}

int main() {
int result = sum(2, 3); // Function call
}

🔹 Parameters vs Arguments
Parameter: Variable listed inside function declaration/definition.

Argument: Actual value passed during function call.

🔹 Stack Frame (Memory Concept)
Every function call gets its own stack frame in memory.

Stack frame holds all local variables of the function.

Top of the stack = Currently executing function.

Stack frame is destroyed after the function finishes execution.

🔹 Function Overloading
Same function name, but:

Different number of parameters.

OR different types of parameters.

int add(int a, int b);
float add(float a, float b);
