/************Shubham Guglani**************/
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long int
#define mod 1000000007
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define tc long long t;cin>>t;while(t--)
#define sc scanf 
#define pf printf
#define fl(i,k,n) for(i=k;i<n;++i)
#define ufl(i,n,k) for(i=n;i>=k;--i)
#define pb push_back
#define mp make_pair
#define vi vector<long long>
#define vs vector<string> 

int main(){
   fio;
   tc{
        string n,m;
        cin>>m>>n;
        ll mat1[2][m.length()];
        ll mat2[n.length()][2];  
        if(n[0]=='0' || m[0]=='0'){
             mat1[0][0]=0; 
             mat2[0][0]=0; 
        }else{  
            mat1[0][0]=1;
            mat2[0][0]=1; 
        }
        for(ll i=1;i<m.length();i++){
            if(m[i]=='0'){
                mat1[0][i]=0;
            }else{
                if(mat1[0][i-1]==1)
                    mat1[0][i]=0;
                else    
                    mat1[0][i]=1;
            }    
        }
        for(ll i=1;i<n.length();i++){
            if(n[i]=='0')
                mat2[i][0]=0;
            else{
                if(mat2[i-1][0]==1)
                    mat2[i][0]=0;
                else    
                    mat2[i][0]=1;
            }
        }
         
        mat1[1][0]=mat2[1][0];
        mat2[0][1]=mat1[0][1];
        if(mat1[0][1]==1 || mat1[1][0]==1)
            mat1[1][1]=mat2[1][1]=0;
        else{
            mat1[1][1]=mat2[1][1]=1;
        }
        for(ll i=2;i<m.length();i++){
            if(mat1[0][i]==1 || mat1[1][i-1]==1)
                mat1[1][i]=0;
            else{
                mat1[1][i]=1;
            }
        }
        for(ll i=2;i<n.length();i++){
            if(mat2[i][0]==1 || mat2[i-1][1]==1)
                mat2[i][1]=0;
            else{
                mat2[i][1]=1;
            }
        }
        ll q;
        cin>>q;
        while(q--){
            ll x,y;
            cin>>x>>y;
            x--;y--;
            if(x<=1 && y<=1){
                if(mat1[x][y]==1)
                    cout << 0;
                else
                    cout << 1;
                continue;
            }    
            if(x<=1){
                if(mat1[x][y]==1)
                    cout << 0;
                else
                    cout << 1;
                continue;
            }
            if(y<=1){
                if(mat2[x][y]==1)
                    cout << 0;
                else
                    cout << 1;
                continue;
            }
            ll dx = x-1;
            ll dy = y-1;
            if(y-dx >= 1){
                if(mat1[1][y-dx]==1)
                    cout << 0;
                else
                    cout << 1;
                continue;
            }
            if(x-dy >=1){
                if(mat2[x-dy][1]==1)
                    cout << 0;
                else
                    cout << 1;
                continue;
            }
        }
        cout<<"\n";
    }
}