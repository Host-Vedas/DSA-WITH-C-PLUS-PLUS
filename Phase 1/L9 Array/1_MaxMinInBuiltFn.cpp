#include <iostream>
using namespace std;
// for max value
int getMax(int num[], int n)
{
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
       maximum = max(maximum,num[i]);
    }
    return maximum;
}
// for minimum value
int getMin(int num[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
       mini = min(mini,n[i]);
    }
    return mini ;
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