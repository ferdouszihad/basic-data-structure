#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &heap, int n)
{
    heap.push_back(n);
    int curr_idx = heap.size() - 1;
    int p_idx = (curr_idx - 1) / 2;
    while (heap[p_idx] < heap[curr_idx])
    {

        swap(heap[p_idx], heap[curr_idx]);
        curr_idx = p_idx;
        p_idx = (curr_idx - 1) / 2;
    }
}

void printHeap(vector<int> heap)
{
    for (int num : heap)
    {
        cout << num << " ";
    }
    cout << endl;
}

void deleteMax(vector<int> &heap)
{

    // heap[0] = heap[heap.size() - 1];
    heap[0] = heap.back();
    heap.pop_back();

    int idx = 0;
    while (1)
    {
        int child1_idx = (idx * 2) + 1;
        int child2_idx = (idx * 2) + 2;
        if (child1_idx < heap.size())
        {
            break;
        }

        int maxChild_idx = heap[child1_idx] > heap[child2_idx] ? child1_idx : child2_idx;

        swap(heap[idx], heap[maxChild_idx]);
        idx = maxChild_idx;
    }
}
int main()
{

    vector<int> heap;
    int t;
    cin >> t;
    while (t--)
    {
        int opt;
        cin >> opt;
        if (opt == 0)
        {
            int num;
            cin >> num;
            insert(heap, num);
            printHeap(heap);
        }
        if (opt == 1)
        {
            deleteMax(heap);
            printHeap(heap);
        }
    }

    return 0;
}