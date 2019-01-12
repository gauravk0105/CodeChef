#include<iostream>
#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        string n,m;
        cin>>m>>n;
        lli col = m.length();
        lli row = n.length();
        lli h[2][col];
        lli v[row][2];  
        if(n[0]=='0' || m[0]=='0'){ h[0][0]=0; v[0][0]=0; }
        else  {  h[0][0]=v[0][0]=1; }
        for(lli i=1;i<col;i++)
        {
            if(m[i]=='0')
            {
                h[0][i]=0;
            }
            else{
                if(h[0][i-1]==1)
                    h[0][i]=0;
                else    
                    h[0][i]=1;
            }    
        }
        for(lli i=1;i<row;i++)
        {
            if(n[i]=='0')
                v[i][0]=0;
            else{
                if(v[i-1][0]==1)
                    v[i][0]=0;
                else    
                    v[i][0]=1;
            }
        }
         
        h[1][0]=v[1][0];
        v[0][1]=h[0][1];
        if(h[0][1]==1 || h[1][0]==1)
            h[1][1]=v[1][1]=0;
        else{
            h[1][1]=v[1][1]=1;
            
        }
        for(lli i=2;i<col;i++)
        {
            if(h[0][i]==1 || h[1][i-1]==1)
                h[1][i]=0;
            else{
                h[1][i]=1;
               
            }
        }
        for(lli i=2;i<row;i++)
        {
            if(v[i][0]==1 || v[i-1][1]==1)
                v[i][1]=0;
            else{
                v[i][1]=1;
               
            }
        }

        lli q;
        cin>>q;
        while(q--)
        {
            lli l,r;
            cin>>l>>r;
            l--;r--;
            if(l<=1 && r<=1)
            {
                if(h[l][r]==1)
                    cout << 0;
                else
                    cout << 1;
                continue;
            }    
            if(l<=1)
            {
                if(h[l][r]==1)
                    cout << 0;
                else
                    cout << 1;
                continue;
            }
            if(r<=1)
            {
                if(v[l][r]==1)
                    cout << 0;
                else
                    cout << 1;
                continue;
            }
            lli d1 = l-1;
            lli d2 = r-1;
            if( r-d1 >= 1 )
            {
                if(h[1][r-d1]==1)
                    cout << 0;
                else
                    cout << 1;
                continue;
            }
            if( l-d2 >=1 )
            {
                if(v[l-d2][1]==1)
                    cout << 0;
                else
                    cout << 1;
                continue;
            }
        }
        cout << endl;
    }
}