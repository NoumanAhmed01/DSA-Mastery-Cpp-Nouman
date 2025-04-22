// Print the Maximum sum of the Sub Array of an Elements.
// Using Kadane's Algorithm Method.
#include <iostream>
using namespace std;

int printSubArray(int *arr, int n)
{
    int currSum = 0;
    int maxSum = INT_FAST8_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Maximum Sum of the Sub Array is : " << maxSum;
}
int main()
{
    int n = 6;
    int arr[n] = {1, 2, -3, 4, -5, 7};
    printSubArray(arr, n);
    return 0;
}