#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef  long long int lli;

int main(){
    lli n,m,bc,x;
    
    map<lli , vector< pair<lli,lli> > > ma;
    cin>>n>>m>>bc;
    lli T[n][m];
    for(lli i=0;i<n;i++){
        for(lli j=0;j<m;j++){
            cin>>x;
            ma[x].push_back({i,j});
        }
        cout<<"\n";
    }
    map<lli,vector<pair<lli,lli>>>::iterator it;
    map<lli,vector<pair<lli,lli>>>::iterator it3 = ma.begin();
    it3--;
    map<lli,vector<pair<lli,lli>>>::iterator it2 = ma.end();
    it2--;
    if(bc<=2){
    for(it=it2;it!=it3;it--)
    {
        vector< pair<lli,lli> > vec = it->second;
        for(lli i=0;i<vec.size();i++)
        {
            if(bc==1)
            {
                T[vec[i].first][vec[i].second]=bc;
            }
            else{
             T[vec[i].first][vec[i].second]=bc;
             bc--;
            }
        }        
    }
    }
    else
    {
        for(it=it2;it!=it3;it--)
    {
        vector< pair<lli,lli> > vec = it->second;
        for(lli i=0;i<vec.size();i++)
        {
            if(bc==1)
            {
                T[vec[i].first][vec[i].second]=bc;
                continue;
            }else
            {
                T[vec[i].first][vec[i].second]=bc;
                bc--;    
            }
            
        }        
    }
    }
    for(lli i=0;i<n;i++)
    {
        for(lli j=0;j<m;j++)
        {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }
}