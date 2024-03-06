#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
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
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 18};
    int key;
    cin >> key;
    int evenIndex = BinarySearch(even, 6, key);
    cout << " your " << key << " is in even array and index is " << evenIndex << endl;
    int oddIndex = BinarySearch(odd, 5, key);
    cout << " your " << key << " is in odd array and index is " << oddIndex << endl;
    return 0;
}