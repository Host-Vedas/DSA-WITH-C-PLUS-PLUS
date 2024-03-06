#include <iostream>
#include <vector>
using namespace std;
int getPivot(vector<int>&arr, int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
    // or
    // return e;
}
int BinarySearch(vector<int>&arr, int s, int e, int key)
{
    int start = s;
    int end = e;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}
int findPosition(vector<int> &arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        // Binary Search in second line
        return BinarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        // BS in first line
        return BinarySearch(arr, 0, pivot - 1, k);
    }
}
int main()
{

    return 0;
}