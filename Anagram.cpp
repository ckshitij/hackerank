#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <stack> 
#define sz 1000007
#define ll long long 
#define forn(i ,n) for(ll i = 0 ; i < (ll)(n) ; i++)
#define fora(i,a,n) for(ll i = (ll)(a) ; i <= (ll)(n) ; i++)
using namespace std;

int main() 
{
	ios :: sync_with_stdio(false);
	std::vector<ll> v;
	std::map<char, int> map1,map2;
	string str,str2,str1;
	ll i,j,k,t,n,ln;
	ll count = 0 , count1 = 0;
	cin>>t;
	while(t--)
	{
        int hash1[26]={0},hash2[26]={0};
        count = 0;
		cin>>str;
		if(str.size() & 1)
			cout<<"-1"<<endl;
		else
		{
			ln = str.size();
            str1 = str.substr(0,ln/2);
			str2 = str.substr((ln/2),ln/2); 
			for (int i = 0; i < str1.size(); ++i)
			{
				hash1[str1[i]-'a']++ ; 
			}
            for (int i = 0; i < str2.size(); ++i)
			{
				hash2[str2[i]-'a']++ ; 
			}
			for (int i = 0; i < 26; ++i)
			{
                if(hash1[i] != hash2[i])
				    count += abs(hash1[i] - hash2[i] );
			}
   			cout<<count/2<<endl;
		}
	}
	return 0;
}
