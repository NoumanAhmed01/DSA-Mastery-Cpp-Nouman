// Quick Sort.

#include <iostream>
using namespace std;

int partition(int arr[], int si, int ei)
{
    int i = si - 1;
    int pivot = arr[ei];
    for (int j = si; j < ei; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[ei]); // Place pivot in correct position
    return i + 1;              // Return pivot's final index
}

void quickSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int pivotIndex = partition(arr, si, ei);

    quickSort(arr, si, pivotIndex - 1); // for left sub array
    quickSort(arr, pivotIndex + 1, ei); // for righy sub array
}

void printArray(int arr[], int n)
{
    cout << "Sorted Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n = 6;
    int arr[n] = {3, 1, 6, 23, 9, 2};
    quickSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}