#include<iostream>
using namespace std;

void countSort(int arr[], int n, int k)
{
    int count[k];
    for(int i=0; i<k; i++)
        count[i] = 0;

    for(int i=0; i<n; i++)
        count[arr[i]]++;

    for(int i=1; i<k; i++)
        count[i] = count[i] + count[i-1];
        
    int output[n];
    for(int i=n-1; i>=0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]] --; 
    }

    for(int i=0; i<n; i++)
        arr[i] = output[i];
}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 5, 0, 0};
    int k =6;
    int n = 8;

    countSort(arr, n, k);
    print(arr, n);

    return 0;
}