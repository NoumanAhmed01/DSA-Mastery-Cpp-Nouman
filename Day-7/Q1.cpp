// Find Largest element in Array.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 1, 4, 2, 3, 1, 5, 6};
    int max = arr[0];
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Max= " << max;

    return 0;
}