#include<bits/stdc++.h>
#include<numeric>
#include<math.h>
using namespace std;
const int INF = 1e9;
const int N = 1e7+3;

int main()
{
    int nums[N];
    for (int i = 0; i < N; ++i)
        nums[i] = -1;
    nums[0] = 0;
    nums[1] = 1;
    nums[2] = 2;
    nums[3] = 3;

    //Precompute
    for (int i = 0; i < N; ++i)
    {
        if (nums[i] == -1 || nums[i] > (nums[i - 1] + 1))
            nums[i] = nums[i - 1] + 1;
        for (int j = 1; j <= i && j * i < N; ++j)
            if (nums[j * i] == -1 || (nums[i] + 1) < nums[j * i])
                nums[j * i] = nums[i] + 1;
    }
    
    int q; cin>>q;
    for(int i=0; i<q; i++){
        int a; cin>>a;
        cout<<nums[a]<<endl;
    }
    return 0;
}