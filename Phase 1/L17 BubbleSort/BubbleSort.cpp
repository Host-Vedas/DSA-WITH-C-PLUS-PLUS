#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) // Identification of best case or perfectly sorted
        {
            break;
        }
    }
}
void printSOrtedArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
int main()
{
    int size;
    int GeneralArray[4] = {5, 2, 3, 1};
    size = sizeof(GeneralArray) / sizeof(GeneralArray[0]);
    cout << " General Array Sorted " << endl;
    BubbleSort(GeneralArray, size);
    printSOrtedArray(GeneralArray, size);
    int WorstCaseArray[11] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    size = sizeof(WorstCaseArray) / sizeof(WorstCaseArray[0]);
    cout << " Worst Case array sorted : " << endl;
    BubbleSort(WorstCaseArray, size);
    printSOrtedArray(WorstCaseArray, size);
    int BestCaseArry[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size = sizeof(BestCaseArry) / sizeof(BestCaseArry[0]);
    cout << "Best case sorted array : " << endl;
    BubbleSort(BestCaseArry, size);
    printSOrtedArray(BestCaseArry, size);
    return 0;
}