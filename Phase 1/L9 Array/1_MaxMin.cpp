#include <iostream>
using namespace std;
// for max value
int getMax(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
// for minimum value
int getMin(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cin >> size;
    int num[100];
    // Taking input of array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
cout<<" The maximum value is "<<getMax(num,size);
cout<<" The minimum value is "<<getMin(num,size);
    return 0;
}