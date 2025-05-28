// Reverse of a Queue

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}

int main()
{
    queue<int> q;
    for (int i = 1; i <= 5; i++)
    {
        q.push(i);
    }

    reverseQueue(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}