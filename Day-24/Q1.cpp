#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Node
{
public:
    string key;
    int val;
    Node *next;

    Node(string key, int val)
    {
        this->key = key;
        this->val = val;
        next = NULL;
    }
};

class HashTable
{
public:
    int totSize;
    int currSize;
    Node **table;

    void rehash()
    {
        Node **oldTable = table;
        int oldSize = totSize;
        totSize = 2 * totSize;
        table = new Node *[totSize];

        for (int i = 0; i < totSize; i++)
        {
            table[i] = NULL;
        }

        for (int i = 0; i < oldSize; i++)
        {
            Node *temp = oldTable[i];
            while (temp != NULL)
            {
                insert(temp->key, temp->val);
                temp = temp->next;
            }
        }
    }

    int hashFunction(string key)
    {
        int idx = 0;
        for (int i = 0; i < key.size(); i++)
        {
            idx = idx + (key[i] * key[i]) % totSize;
        }
        return idx % totSize;
    }

    HashTable(int size)
    {
        this->totSize = size;
        currSize = 0;

        table = new Node *[totSize];
        for (int i = 0; i < totSize; i++)
        {
            table[i] = NULL;
        }
    }

    void insert(string key, int val)
    {
        if ((float)currSize / totSize > 0.7)
        {
            rehash();
        }

        int idx = hashFunction(key);
        Node *newNode = new Node(key, val);
        newNode->next = table[idx];
        table[idx] = newNode; // Fix: update table index
        currSize++;
    }

    void remove(string key)
    {
        int idx = hashFunction(key);
        Node *temp = table[idx];
        Node *prev = NULL;

        while (temp != NULL)
        {
            if (temp->key == key)
            {
                if (prev == NULL)
                {
                    table[idx] = temp->next;
                }
                else
                {
                    prev->next = temp->next;
                }
                delete temp;
                currSize--;
                cout << "Key '" << key << "' removed.\n";
                return;
            }
            prev = temp;
            temp = temp->next;
        }

        cout << "Key '" << key << "' not found.\n";
    }

    void search(string key)
    {
        int idx = hashFunction(key);
        Node *temp = table[idx];

        while (temp != NULL)
        {
            if (temp->key == key)
            {
                cout << "Found key '" << key << "' with value: " << temp->val << endl;
                return;
            }
            temp = temp->next;
        }

        cout << "Key '" << key << "' not found.\n";
    }
};

int main()
{
    HashTable ht(5);

    ht.insert("apple", 10);
    ht.insert("banana", 20);
    ht.insert("cherry", 30);

    ht.search("banana");
    ht.remove("banana");
    ht.search("banana");

    return 0;
}
