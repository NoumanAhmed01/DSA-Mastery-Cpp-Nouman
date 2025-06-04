#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Heap
{
    vector<int> vec;

public:
    void push(int val)
    {
        vec.push_back(val);

        int x = vec.size() - 1;
        int parI = (x - 1) / 2;

        while (parI >= 0 && vec[x] > vec[parI])
        {
            swap(vec[x], vec[parI]);
            x = parI;
            parI = (x - 1) / 2;
        }
    }
    void heapify(int i)
    {
        if (i >= vec.size())
        {
            return;
        }
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        int maxI = i;
        if (left < vec.size() && vec[left] > vec[maxI])
        {
            maxI = left;
        }
        if (right < vec.size() && vec[right] > vec[maxI])
        {
            maxI = right;
        }
        swap(vec[i], vec[maxI]);
        if (maxI != i)
        {
            heapify(maxI);
        }
    }

    void pop()
    {
        swap(vec[0], vec[vec.size() - 1]);
        vec.pop_back();

        heapify(0);
    }

    int top()
    {
        return vec[0];
    }

    int isEmpty()
    {
        return vec.size() == 0;
    }
};

int main()
{
    Heap heap;
    heap.push(50);
    heap.push(20);
    heap.push(100);
    heap.push(4);

    cout << "heap top =  " << heap.top() << endl;

    heap.pop();
    cout << "heap top = " << heap.top() << endl;

    return 0;
}