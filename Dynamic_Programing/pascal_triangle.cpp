#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a[10][10];
    cout<<"Enter a no. : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        cout<<" ";
        for(j=1;j<=i;j++)
        {
            if(i==j||j==1)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}