#include <iostream>
using namespace std;

int binarySearch(int A[], int size, int key)
{
    int l, h, mid;
    
    l=0;
    h=size-1;

    while(l<=h)
    {
        mid = (l+h)/2;
        if(key==A[mid])
            return mid;
        
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key: ";
    cin >> key;
        
    return 0;
}