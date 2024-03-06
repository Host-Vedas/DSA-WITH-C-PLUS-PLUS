#include <iostream>
/*
    total occurance of element = lastOccurance - firstOccurance + 1;
*/
using namespace std;
int firstOccr(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int lastOccr(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int even[] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 5};
    cout << " FIrst occurance of 3 is at index" << firstOccr(even, sizeof(even) / 4, 3) << endl;
    cout << " last occurance of 3 is at index" << lastOccr(even, sizeof(even) / 4, 3) << endl;
    return 0;
}