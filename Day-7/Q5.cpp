// Binary Search Algorithm Code.
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end / 2);
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int n;
    cout << "Enter size of Array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Array Element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter Number to Search" << endl;
    cin >> key;
    cout << binarySearch(arr, n, key) << endl;

    return 0;
}