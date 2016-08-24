#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,k,i,j,x,count = 0;
    cin >> n >> k;
    vector<int> ar(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>ar[i];
        //cout<<ar[i]<<endl;
    }
    for(int i = 0 ; i < n ; i++)
    {
        for( j = i+1 ; j < n ; j++)
        {
            if((ar[i]+ar[j]) % k == 0 && i < j)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
