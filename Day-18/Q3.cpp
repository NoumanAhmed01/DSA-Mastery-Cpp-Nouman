// Find and remove Nth node from end of the Linked List

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    // Add value at the beginning of the Linked List
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {

            newNode->next = head;
            head = newNode;
        }
    }

    // Calculate size of Linked list
    int getSize()
    {
        Node *temp = head;
        int sz = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            sz++;
        }
        return sz;
    }

    // Remove nth node from the end
    void removeNth(int n)
    {
        int size = getSize();
        Node *prev = head;

        for (int i = 1; i < (size - n); i++)
        {
            prev = prev->next;
        }
        prev->next = prev->next->next;
    }

    // Print value of the Linked List
    void print_list()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "Null\n";
    }
};

int main()
{

    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print_list();
    ll.removeNth(2);
    ll.print_list();
    return 0;
}