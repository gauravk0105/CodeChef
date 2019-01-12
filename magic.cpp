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
        lli mini_index=0;
        for(lli i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i] < arr[mini_index])
                mini_index=i;
        }
        //cout << mini_index << endl;
        lli r=0;
        lli j=mini_index;
        if( arr[(j+1)%n] >= arr[j] )
            r=1;
        else
            r=0;
        lli flag=1;
        do
        {
            if(r==1)
            {
                if(arr[(j+1)%n]>=arr[j])
                    j=(j+1)%n;
                else
                    {
                        flag=0;break;
                    }
            }    
            else
            {
                if( arr[(j-1+n)%n]<=arr[j] )
                    j=(j-1+n)%n;
                else
                    {
                        flag=0;
                        break;
                    }
            }
        }while((j+1)%n != mini_index);
        if(flag==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}