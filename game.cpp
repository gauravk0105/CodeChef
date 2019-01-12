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
        bool con=false;
        lli n;
        cin>>n;
        vector<lli> prime;
        prime.push_back(2);
        prime.push_back(3);
        prime.push_back(5);
        prime.push_back(7);
        prime.push_back(11);prime.push_back(13);prime.push_back(17);prime.push_back(19);prime.push_back(23);prime.push_back(29);prime.push_back(31);prime.push_back(37);
        prime.push_back(41);prime.push_back(43);prime.push_back(47);
        //prime[2]=prime[3]=prime[5]=prime[7]=prime[11]=prime[13]=prime[17]=prime[19]=prime[23]=prime[29]=prime[31]=prime[37]=prime[41]=prime[43]=prime[47]=true;
        set<lli> s;
        lli count[500]={0};
        pair<lli,lli> arr[n];
        for(lli i=0;i<n;i++)
        {
            cin>>arr[i].first;
            arr[i].second=-1;
            s.insert(arr[i].first);
            count[arr[i].first]++;
            if(prime[arr[i].first]==true)
                con=true;
        }

        if(s.size()==1)
        {
            
            for(lli i=0;i<prime.size();i++)
            {
                if(__gcd(prime[i],arr[0].first)==1)
                {
                    cout << 1 << endl;
                    cout << prime[i] << " ";
                    for(lli i=1;i<n;i++)
                        cout << arr[i].first << " ";
                    //cout << it->first << endl;
                    break;    
                }
            }
            continue;
        }

        if( (count[29]>0) || (count[31]>0) || (count[37]>0) || (count[31]>0) || (count[37]>0) || (count[41]>0) || (count[43]>0) || (count[47]>0) )
        {
            //cout << "asasd111";
            cout << 0 << endl;
            for(lli i=0;i<n;i++)
                cout << arr[i].first << " ";
            cout << endl;
            continue;
        }
        // prime which factor not exist
        // lli k=0;
        // for(lli i=0;i<prime.size();i++)
        // {
        //     k=1;
        //     //cout << prime[i] << " " ;
        //     if(count[prime[i]]==0)
        //     {
        //         k=0;
        //         continue;
        //     }
        //     for(lli j=2;j<=50/(prime[i]);j++)
        //     {
        //         if(count[j*prime[i]]==0)
        //         {
        //             continue;
        //         }
        //         else
        //         {
        //             k=0;
        //             break;
        //         }
        //     }   
        //     //cout << it->first << " ";
        //     if(k==1)
        //         break;
        // }

        // //cout << k << endl;

        // if(k==1)
        // {
        //     cout << 0 << endl;
        //     for(lli i=0;i<n;i++)
        //         cout << arr[i].first << " ";
        //     cout << endl;
        //     continue;
        // }

        //cout << "dsad";

        
        
        // lli g=0;
        // lli edge=0;
        // for(lli i=0;i<n;i++)
        // {
        //     if(arr[i].second==1)
        //         continue;
        //     if(edge==n-1)
        //         break;
        //     for(lli j=0;j<n;j++)
        //     {
        //         if(__gcd(arr[i].first,arr[j].first)==1)
        //         {
        //             arr[i].second=1;
        //             arr[j].second=1;
        //             edge++;
        //             break;
        //         }
        //     }
            
        // }

        // //cout << edge << endl;
        // if(edge==n-1)
        // {
        //     //cout << "asasd41";
        //     cout << 0 << endl;
        //     for(lli i=0;i<n;i++)
        //         cout << arr[i].first << " ";
        //     cout << endl;
        //     continue;
        // }
        // else
        // {
        //     cout << 1 << endl;
        //     cout << 47 << " ";
        //     for(lli i=1;i<n;i++)
        //         cout << arr[i].first << " ";    
        //     cout << endl;
        // }
        bool flag;
        for(lli i=0;i<n;i++)
        {
            flag=true;
            for(lli j=0;j<n;j++)
            {
                if(j!=i)
                {
                    if(__gcd(arr[i].first,arr[j].first)==1)
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
                cout << arr[i].first << " ";
            cout << endl;
            continue;
        }    
        else
        {
            cout << 1 << endl;
            if(arr[0].first==47)
                cout << 37 << " ";
            else
                cout << 47 << " ";
            for(lli i=1;i<n;i++)
                cout << arr[i].first << " ";
            cout << endl;
            continue;
        }
    }
}