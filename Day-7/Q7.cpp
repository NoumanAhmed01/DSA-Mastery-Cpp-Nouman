// Print the Maximum sum of the Sub Array of an Elements.
// Using BruteForce Method.

#include <iostream>
using namespace std;

int printSubArray(int *arr, int n)
{
    int maxSum = INT_FAST8_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout << currSum << ",";
            maxSum = max(currSum, maxSum);
        }
        cout << endl;
    }
    cout << "Maximum Sum of the Sub Array is : " << maxSum;
}

// Little Optimize Version.
int optimizeprintSubArray(int *arr, int n)
{
    int maxSum = INT_FAST8_MIN;
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Maximum Sum of the Sub Array is : " << maxSum;
}
int main()
{
    int n = 6;
    int arr[n] = {1, 2, -3, 4, -5, 7};
    // printSubArray(arr, n);
    optimizeprintSubArray(arr, n);
    return 0;
}