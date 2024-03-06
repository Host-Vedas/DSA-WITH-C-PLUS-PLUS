#include <iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return true;
        }
        
    }
    return false;
    
}
int main()
{
    int arr[10]={5,7,-2,10,22,0,-2,5,22,1};
    // find whether 1 is present in arry or not
    int key;
    cout<<" Enter the key"<<endl;
    cin>>key;
    bool found =search(arr,10,key);
    if (found)
    {
        cout<<"Your search i.e "<<key<<" present in the given array"<<endl;
    }
    else
    {
        cout<<"Your search i.e "<<key<<" is not avilable given array"<<endl;
    }
    
    return 0;
}