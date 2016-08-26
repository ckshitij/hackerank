#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll n,i,j,k,count = 0;
    cin >> n;
    vector<int> ar(n);
    for(i = 0;i < n;i++)
    {
       cin >> ar[i];
    }
    if(ar[0] == 0 && ar[1] == 0 && n == 2)
    {
        cout<<1;
        return 0;
    }
    for( i = 0 ;i < n ; i++)
    {
        if(ar[i+1] == 0 && ar[i+2] == 0)
        {
            i++;
            count++;
        }
        else if(ar[i + 1] == 1)
        {
            i++;
            count++;
        }
        else
          count++;
    }
    cout<<count - 1<<endl;
    return 0;
}
