#include <iostream>
using namespace std;

void merge(int a[], int beg, int mid, int end)
{
    int i, j, k;
    int n1 = mid-beg+1;
    int n2 = end-mid;

    int left[n1];
    int right[n2];

    // copying elements
    for(i=0; i<n1; i++)
    {
        left[i] = a[beg+1];
    }
    for(j=0; j<n2; j++)
    {
        right[j] = a[mid+1+j];
    }

    i=0, j=0, k=beg;

    while(i<n1 && j<n2){
        if(left[i] < right[j]){
            a[k] = left[i];
            i++;
            k++;
        }
        else{
            a[k] = right[j];
            j++;
            k++;
        }
    }

    // copying remaining elements
    while(i<n1){
        a[k] = left[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int beg, int end){
    if(beg < end){
        int mid = (beg+end)/2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid+1, end);
        merge(a, beg, mid, end);
    }
}
