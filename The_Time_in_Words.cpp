#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
	int i,j,h,m,r,s;
	cin>>h>>m;
    	string ar[]={"zero","one","two","three","four","five","six","seven","eigth","nine","ten","eleven","twelve"};
    	string br[]={"ten","eleven","twelve","thirteen","forteen","fifteen","sixteen","seventeen","eighteen","ninteen","twenty"};
    	string cr[]={"zero","ten","twenty","thirty","forty","fifty","sixty"};
    	if(m==0)
    	{
    		cout<<ar[h]<<" o' clock"<<endl;
    		return 0;
    	} 
    	if(m<=30)
    	{
    		if(m==30)
    		{
    			cout<<"half past "<<ar[h]<<endl;
    		}
    		else
    		{
    			j=m;
    			r=j%10;
    			s=j/10;
    			if(j>=10)
    			{
    				if(j==15)
    				{
    					cout<<"quarter past "<<ar[h]<<endl;
    				}
    				else if(s==1)
    				{
    					cout<<br[r]<<" minutes past "<<ar[h]<<endl;
    				}
    				else if(r!=0)
    				{
    					cout<<cr[s]<<" "<<ar[r]<<" minutes past "<<ar[h]<<endl;
    				}
    				else if(r==0)
    				{
    					cout<<cr[s]<<" minutes past "<<ar[h]<<endl;
    				}
    			}
    			else
    			{
    				cout<<ar[j]<<" minutes past "<<ar[h]<<endl;
    			}
    		}
    		
    	}
    	else
    	{
    		if(m==45)
    		{
    			cout<<"quarter to "<<ar[h+1]<<endl;
    		}
    		else
    		{
    			j=60-m;
    			r=j%10;
    			s=j/10;
    			if(j>=10)
    			{
    				if(s==1)
    				{
    					cout<<br[r]<<" minutes to "<<ar[h+1]<<endl;
    				}
    				else if(r!=0)
    				{
    					cout<<cr[s]<<" "<<ar[r]<<" minutes to "<<ar[h+1]<<endl;
    				}
    				else if(r==0)
    				{
    					cout<<cr[s]<<" minutes to "<<ar[h+1]<<endl;
    				}
    			}
    			else
    			{
    				cout<<ar[j]<<" minutes to "<<ar[h+1]<<endl;
    			}
    		}
    	}
    	return 0;
}
