#include<iostream>
#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        lli arr[n];
        for(lli i=0;i<n;i++)
            cin>>arr[i];
        bool flag;
        for(lli i=0;i<n;i++)
        {
            flag=true;
            for(lli j=0;j<n;j++)
            {
                if(j!=i)
                {
                    if(__gcd(arr[i],arr[j])==1)
                    {
                       continue;     
                    }
                    else{
                        flag=false;
                        break;    
                    }
                }
            }
            if(flag==true)
                break;
        }
        if(flag==true)
        {
            cout << 0 << endl;
            for(lli i=0;i<n;i++)
                cout << arr[i] << " ";
            cout << endl;
            continue;
        }    
        else
        {
            cout << 1 << endl;
            if(arr[0]==47)
                cout << 37 << " ";
            else
                cout << 47 << " ";
            for(lli i=1;i<n;i++)
                cout << arr[i] << " ";
            cout << endl;
            continue;
        }
    }

}