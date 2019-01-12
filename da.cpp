#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--){
        lli i=0,count=1,num;
        cin>>num;
        if(num<4){
            cout << -1;
            continue;
            }
        while(num-i>5){
            i=i+4;
            count=4*count;
        }
        cout << (num-i)*count;    
    }
    return 0;
}