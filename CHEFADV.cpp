#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,m,x,y;
        cin>>n>>m>>x>>y;
        cout<<(n-1)%x <<" "<< (m-1)%y<<"\n";

        cout<<(n-2)%x <<" "<< (m-2)%y<<"\n";
        if( ((n-1)%x==0 && (m-1)%y==0) || ((n-2)%x==0 && (m-2)%y==0) )
            cout << "Chefirnemo" << endl;
        else
            cout << "Pofik" << endl;
    }
    return 0;
}