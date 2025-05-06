#include <iostream>
#include <climits>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countSort(int arr[], int n)
{
    int minVal = INT_MAX, maxVal = INT_MIN;

    // Find min and max
    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    int range = maxVal - minVal + 1;
    int *freq = new int[range](); // initialize to 0

    // Count frequencies
    for (int i = 0; i < n; i++)
    {
        freq[arr[i] - minVal]++;
    }

    // Overwrite original array
    for (int i = 0, j = 0; i < range; i++)
    {
        while (freq[i]-- > 0)
        {
            arr[j++] = i + minVal;
        }
    }

    delete[] freq;
    printArray(arr, n);
}

int main()
{
    int n = 5;
    int arr[n] = {4, 1, 2, 6, 3};
    countSort(arr, n);
    return 0;
}
