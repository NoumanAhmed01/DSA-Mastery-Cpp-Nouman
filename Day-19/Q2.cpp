// Add element at bottom of the stack

#include <iostream>
#include <stack>
using namespace std;

// Recursive function to push an element at the bottom of the stack
void pushAtBottom(stack<int> &s, int x)
{
    // Base case: if stack is empty, push the element
    if (s.empty())
    {
        s.push(x);
        return;
    }

    // Recursive case:
    // 1. Store the top element
    int temp = s.top();
    // 2. Remove the top element
    s.pop();
    // 3. Recursively push to bottom
    pushAtBottom(s, x);
    // 4. Push the stored element back
    s.push(temp);
}

int main()
{
    stack<int> s;

    // Push some elements
    s.push(1);
    s.push(2);
    s.push(3);

    // Push 0 at the bottom
    pushAtBottom(s, 0);

    cout << "After pushing 0 at bottom: ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}