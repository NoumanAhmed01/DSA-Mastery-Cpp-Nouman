#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> hashTable;

    // Inserting key-value pairs
    hashTable[1] = "Apple";
    hashTable[2] = "Banana";
    hashTable[3] = "Cherry";

    // Display all key-value pairs
    cout << "Hash Table contents:\n";
    for (auto &pair : hashTable)
    {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    // Searching for a key
    int keyToFind = 2;
    if (hashTable.find(keyToFind) != hashTable.end())
    {
        cout << "\nFound key " << keyToFind << " with value: " << hashTable[keyToFind] << endl;
    }
    else
    {
        cout << "\nKey " << keyToFind << " not found.\n";
    }

    // Deleting a key
    int keyToDelete = 1;
    hashTable.erase(keyToDelete);
    cout << "\nAfter deleting key " << keyToDelete << ":\n";
    for (auto &pair : hashTable)
    {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    return 0;
}
