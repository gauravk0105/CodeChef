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
        string str;
        cin>>str;
        vector< pair<lli,lli> > vec;
        for(lli i=0;i<str.length();i++)
        {
            if(str[i]!='.')
            {
                lli a,b;
                lli d = str[i]-'0';
                if(i+1-d <= 0)
                    a=1;
                else
                    a=i+1-d;
                if(i+1+d>=str.length())
                    b=str.length();
                else
                    b=i+1+d;
                vec.push_back({a,b});                    
            }
        }

        if(vec.size()==0 || vec.size()==1)
            cout << "safe" << endl;
        else
        {
            lli flag=0;
            for(lli i=0;i<vec.size()-1;i++)
            {
                if(vec[i].second < vec[i+1].first)
                    continue;
                else{
                    flag=1;
                    cout << "unsafe" << endl;
                    break;
                }
            }
            if(flag==0)
                cout << "safe" << endl;
        }
    }   
}