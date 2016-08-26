#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <strings.h>
using namespace std;

int main() {
    int count[26]={0};
    char s[1000];
    long int c;
    gets(s);
    int flag=0,i;
     for (c=0; c<=strlen(s);c++ )
    {
      if ( s[c] >= 'a' && s[c] <= 'z' )
         count[s[c]-'a']=1;
         else
             if( s[c] >= 'A' && s[c] <= 'Z' )
                  count[s[c]-'A']=1;
      
   }
    
    for(i=0;i<26;i++)
    {    if(count[i]!=1)
            flag=1;
    }
     if(flag==1)
        cout<<"not pangram\n";
    else
        cout<<"pangram\n";
    
return 0;
}
