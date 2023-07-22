#include <bits/stdc++.h>
using namespace std;

void selectSort(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int imin = i;
		for(int j=i+1; j<n; j++)
		{
			if(arr[j] < arr[imin])
				imin = j;
		}
		swap(arr[imin], arr[i]);
	}
	
    cout << "Sorted array is: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
