#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

class Node
{
public:
    unordered_map<char, Node *> children; // Fixed typo in variable name (was 'childern')
    bool endOfWord;
    Node()
    {
        endOfWord = false;
    }
};

class Trie // Fixed spelling (was 'Tries')
{
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }

    // Insert a word into the trie
    void insert(string key)
    {
        Node *temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if (temp->children.count(key[i]) == 0) // Fixed condition (removed '=' from count)
            {
                temp->children[key[i]] = new Node();
            }
            temp = temp->children[key[i]];
        }
        temp->endOfWord = true;
    }

    // Search for a complete word in the trie
    bool search(string key)
    {
        Node *temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if (temp->children.count(key[i]))
            {
                temp = temp->children[key[i]];
            }
            else
            {
                return false;
            }
        }
        return temp->endOfWord;
    }

    // Check if any word starts with the given prefix
    bool startsWith(string prefix)
    {
        Node *temp = root;
        for (int i = 0; i < prefix.size(); i++)
        {
            if (temp->children.count(prefix[i]))
            {
                temp = temp->children[prefix[i]];
            }
            else
            {
                return false;
            }
        }
        return true;
    }

    // Delete a word from the trie
    void deleteWord(string key)
    {
        deleteHelper(root, key, 0);
    }

    // Helper function for deletion
    bool deleteHelper(Node *current, string key, int index)
    {
        if (index == key.length())
        {
            if (!current->endOfWord)
            {
                return false; // Word doesn't exist
            }
            current->endOfWord = false;
            return current->children.empty();
        }

        char ch = key[index];
        if (current->children.count(ch) == 0)
        {
            return false; // Word doesn't exist
        }

        Node *child = current->children[ch];
        bool shouldDeleteChild = deleteHelper(child, key, index + 1);

        if (shouldDeleteChild)
        {
            current->children.erase(ch);
            delete child;
            return current->children.empty() && !current->endOfWord;
        }

        return false;
    }

    // Count total words in the trie
    int countWords()
    {
        return countWordsHelper(root);
    }

    // Helper function for counting words
    int countWordsHelper(Node *node)
    {
        int count = 0;
        if (node->endOfWord)
        {
            count++;
        }
        for (auto &pair : node->children)
        {
            count += countWordsHelper(pair.second);
        }
        return count;
    }

    // Print all words in the trie
    void printAllWords()
    {
        string word;
        printAllWordsHelper(root, word);
    }

    // Helper function for printing all words
    void printAllWordsHelper(Node *node, string &currentWord)
    {
        if (node->endOfWord)
        {
            cout << currentWord << endl;
        }
        for (auto &pair : node->children)
        {
            currentWord.push_back(pair.first);
            printAllWordsHelper(pair.second, currentWord);
            currentWord.pop_back();
        }
    }
};

int main()
{
    vector<string> words = {"the", "a", "there", "their", "any", "thee"};

    Trie trie;
    for (int i = 0; i < words.size(); i++)
    {
        trie.insert(words[i]);
    }

    // Test the operations
    cout << "Search 'their': " << (trie.search("their") ? "Found" : "Not found") << endl;
    cout << "Search 'them': " << (trie.search("them") ? "Found" : "Not found") << endl;
    cout << "Starts with 'the': " << (trie.startsWith("the") ? "Yes" : "No") << endl;
    cout << "Starts with 'app': " << (trie.startsWith("app") ? "Yes" : "No") << endl;

    cout << "\nAll words in trie:" << endl;
    trie.printAllWords();

    cout << "\nTotal words in trie: " << trie.countWords() << endl;

    cout << "\nDeleting 'their'" << endl;
    trie.deleteWord("their");
    cout << "Search 'their' after deletion: " << (trie.search("their") ? "Found" : "Not found") << endl;
    cout << "Total words after deletion: " << trie.countWords() << endl;

    return 0;
}