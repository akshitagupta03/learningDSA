#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int key)
{
    int i=0;
    while(i<n)
    {
        if(key == arr[i])
        {
            cout << "Position is: " << i;
        }
        else
        {
            continue;
        }
    }
    cout << -1 << endl;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    linearSearch(arr, 5, 6);
        
    return 0;
}