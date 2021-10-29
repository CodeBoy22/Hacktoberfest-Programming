#include<bits/stdc++.h>
#include<numeric>
#include<math.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    while(i < n)
    {
        if(arr[i] == 0 and arr[i+1] == 0 and arr[i+2] == 0)
        {
            count++;
            i+=2;
        }
        else if(arr[i] == 0)
        {
            count++;
            i++;
        }
        else if(arr[i] != 0)
        {
            i++;
        }
    }

    cout<<count-1<<endl;

    return 0;
}