// Program to print Reverse of an Array.
// This is with Extra Space the second is without Extra Space.

#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {54, 33, 12, 32, 78, 5, 21};
    int n = (sizeof(arr) / sizeof(int));

    int copyArray[n];
    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        copyArray[i] = arr[j];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArray[i];
    }

    printArray(arr, n);

    return 0;
}
