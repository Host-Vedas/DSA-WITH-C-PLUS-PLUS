#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // break
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int myArr[7] = {10, 1, 7, 4, 8, 2, 11};
    insertionSort(myArr, 7);
    cout << " printiing the sorted array " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << myArr[i] << "   ";
    }
    cout << endl;

    return 0;
}