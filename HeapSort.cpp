#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxHeapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left<n && arr[left] > arr[largest])
        largest = left;
    
    if(right<n && arr[right] > arr[largest])
        largest = right;

    if(largest != i)
    {
        swap(&arr[largest], &arr[i]);
        maxHeapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n)
{
    for(int i=(n-2)/2; i>= 0; i--)
        maxHeapify(arr, n, i);
}

void heapSort(int arr[], int n)
{
    buildHeap(arr, n);
    for(int i=0; i>=1; i--)
    {
        swap(&arr[0], &arr[i]);
        maxHeapify(arr, i, 0);
    }
}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7}; 
    int n = 6;
    heapSort(arr, n);
    cout<<"Sorted Array is: "<<endl;
    print(arr, n);
    return 0;
}