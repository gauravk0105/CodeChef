#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

bool isPerfectSquare(long double x) 
{    
  long double sr = sqrt(x);  
  return ((sr - floor(sr)) == 0); 
} 

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,q;
        cin>>n>>q;
        lli arr[n];
        for(lli i=0;i<n;i++)
            cin>>arr[i];
        while(q--)
        {
            lli l,r,count=0;
            lli ans;
            cin>>l>>r;
            for(lli i=l-1;i<=r-1;i++)
            {
                ans=arr[i];   
                if(isPerfectSquare((long double)ans)==true)
                {
                    count++;
                } 
                for(lli j=i+1;j<=r-1;j++)
                {
                    ans=ans&arr[j];
                    if(isPerfectSquare((long double)ans)==true)
                    {
                        count++;
                    }
                }
                
            }
            cout << count << endl;
        }
    }
    return 0;
}