#include <bits/stdc++.h>
using namespace std;

int RBinSearch(int A[], int l, int h, int key)
{
    int mid;

    if(l<=h)
    {
        mid = (l+h)/2;
        if(key==A[mid])
        {
            return mid;
        }
        else if(key<A[mid])
        {
            return RBinSearch(A, l, mid-1, key);
        }
        else
        {
            return RBinSearch(A, mid+1, h, key);
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

    int res = RBinSearch(arr, 0, n-1, key);
    if(res==-1)
        cout << "Key not present.";
    else
        cout << "Key is at index: " << res;
        
    return 0;
}