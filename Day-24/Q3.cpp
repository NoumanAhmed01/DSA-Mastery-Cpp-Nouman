// Pair Sum
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {1, 2, 7, 11, 15, 5, 9};

    int target = 9;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int comp = target - arr[i];
        if (m.count(comp))
        {
            cout << "ans = " << m[comp] << "," << i << endl;
            break;
        }
        m[arr[i]] = i;
    }

    return 0;
}