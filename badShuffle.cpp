#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli num;
    cin>>num;
    for(lli i=2;i<=ceil((double)num/2);i++)
        cout<<i<<" ";
    cout<<10000-9999<<" ";
    for(lli i=ceil((double)num/2)+2;i<=num;i++)
        cout<<i<<" ";
    cout<<ceil((double)num/2)+1<<" ";
    cout<<endl;
    cout<<num<<" ";
    for(lli i=1;i<=num-1;i++)
        cout<<i<<" ";
}
