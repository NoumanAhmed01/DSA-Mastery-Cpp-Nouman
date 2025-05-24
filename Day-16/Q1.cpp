#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int si, int mid, int ei)
{
    vector<int> temp;
    int i = si;
    int j = mid + 1;

    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }

    // for transfer to original array
    for (int x = 0, i = si; x < temp.size(); x++, i++)
    {
        arr[i] = temp[x];
    }
}

void mergesort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2; // Better way to calculate mid to avoid overflow

    mergesort(arr, si, mid);     // for left array
    mergesort(arr, mid + 1, ei); // for right array

    merge(arr, si, mid, ei); // for combine or merging array
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

    mergesort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}