#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    // Merge both sorted halves
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements of left half
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements of right half
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back to original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high)
{
    // Base Case
    if (low >= high)
        return;

    // Find Mid
    int mid = (low + high) / 2;

    // Sort Left Half
    mergeSort(arr, low, mid);

    // Sort Right Half
    mergeSort(arr, mid + 1, high);

    // Merge Both Halves
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {34, 23, 76, 20, 35};

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";

    for (int x : arr)
        cout << x << " ";

    return 0;
}