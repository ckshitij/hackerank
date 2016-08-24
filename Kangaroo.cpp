#include <bits/stdc++.h>
#define ll long double
using namespace std;

int main()
{
    ll x1, v1, x2, v2 , n;
    cin >> x1 >> v1 >> x2 >> v2;
    n = ((x1 - x2) / (v2 - v1)) + 1;
    if( n > 0 && n == floor(n))
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
