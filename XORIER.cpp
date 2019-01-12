#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli limit=101;

bool isPrime[101];

void getPrime()
{
    isPrime[0]=false;
    isPrime[1]=false;
    for(lli i=2;i<limit;i++)
        isPrime[i]=true;
    for(lli i=2;i*i<limit;i++)
    {
        if(isPrime[i]==true)
        {
            for(lli j=i*2;j<limit;j+=i)
                isPrime[j]=false;
        }
    }
}

lli xorP(lli* arr, lli n, lli x)
{
    lli result = 0; 
    unordered_map<lli, lli> m;
    for (lli i=0; i<n ; i++)
    {
        lli curr_xor =  x^arr[i];
        if (m.find(curr_xor) != m.end())
            result += m[curr_xor];
        m[arr[i]]++;
    }
    return result;
}

int main()
{
    getPrime();
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,x,count=0;
        cin>>n;
        lli odd=0;
        lli even=0;
        lli arr[n];
        for(lli i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]&1)
                odd++;
            else  even++;       
        }
        lli evenP = (odd*(odd-1))/2 + (even*(even-1))/2;
        lli res=xorP(arr,n,0)+xorP(arr,n,2);
        cout << evenP - res << endl;
        
        // vector<lli> odd;
        // vector<lli> even;
        // for(lli i=0;i<n;i++)
        // {
        //     cin>>x;
        //     if(x&1)
        //         odd.push_back(x);
        //     else  even.push_back(x);
        // }
        // for(lli i=0;i<odd.size();i++)
        // {
        //     for(lli j=i+1;j<odd.size();j++)
        //     {
        //         lli r = odd[i]^odd[j];
        //         if( isPrime[(r/2)]==true )
        //             count++;
        //         else
        //         {
        //             for(lli i=2;i<=r;i++)
        //             {
        //                 if(isPrime[r-i]==true){
        //                     count++;
        //                     break;
        //                 }
        //             }
        //         }
        //     }
        // }
        // for(lli i=0;i<even.size();i++)
        // {
        //     for(lli j=i+1;j<even.size();j++)
        //     {
        //         lli r = even[i]^even[j];
        //         if( isPrime[(r/2)]==true )
        //             count++;
        //         else
        //         {
        //             for(lli i=2;i<=r;i++)
        //             {
        //                 if(isPrime[r-i]==true){
        //                     count++;
        //                     break;
        //                 }
        //             }
        //         }
        //     }
        // }
        // cout << count << endl;
    }
}