#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int> &arr, int index)
{
    if (index == arr.size())
    {
        for (int num : arr)
            cout << num << " ";
        cout << endl;
        return;
    }

    for (int i = index; i < arr.size(); ++i)
    {
        swap(arr[i], arr[index]);
        permute(arr, index + 1);
        swap(arr[i], arr[index]); // backtrack
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    permute(arr, 0);
    return 0;
}
