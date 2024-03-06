#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // we are assuming 1st elementis sorted so we are using n-1 iteration and and startion from index 1 instead of index 0
        int store_temperiorly = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > store_temperiorly)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = store_temperiorly;
    }
}
int main()
{
    int myArr[8] = {10, 1, 12, 7, 4, 8, 2, 11};
    insertionSort(myArr, 7);
    cout << " printiing the sorted array " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << myArr[i] << "   ";
    }
    cout << endl;
    return 0;
}