🔹 What is a Pointer?
A pointer is a variable that stores the address of another variable.

Syntax: int \*ptr = &a;

&a → Address of a

\*ptr → Dereference operator, gives the value at that address.

🔹 Pointer Size
Typically occupies 4 bytes (32-bit) or 8 bytes (64-bit) depending on your system.

🔹 Pointer to Pointer
A pointer that stores the address of another pointer:
int \*\*ptr2 = &ptr;

🔹 NULL Pointer
A pointer initialized to NULL to avoid undefined or garbage addresses.

Example: int \*p = NULL;

Never dereference a NULL pointer → causes segmentation fault.

🔹 Function Arguments

1. Pass by Value:

Copies the variable's value into the function.

Changes made do not affect the original value.

2. Pass by Reference:

Passes the address of the variable.

Changes made affect the original variable.

Syntax: void change(int &a)

🔹 Reference Variable
Alternate name for an existing variable.

Syntax:

int a = 5;
int &b = a; // b is reference to a
