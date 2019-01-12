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
        lli n,flag=1;
        cin>>n;
        lli A[n],B[n];
        for(lli i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(lli i=0;i<n;i++)
        {
            cin>>B[i];
            if(A[i]!=B[i])
            {
                flag=0;
            }
        }
        if(n<3 && flag==1)
        {
            cout << "TAK" << endl;
            continue;
        }

        if(n<3 && flag==0)
        {
            cout << "NIE" << endl;
            continue;
        }

        if(flag==1)
        {
            cout << "TAK" << endl;
            continue;
        }

        flag=1;

        lli i=0; 
        for(i=0;i<n-2;i++)
        {
            if(A[i]==B[i])
                continue;
            else
            {
                if(A[i]<B[i])
                {
                    lli s = B[i]-A[i];
                    A[i] = A[i] + 1*s;
                    A[i+1] = A[i+1] + 2*s;
                    A[i+2] = A[i+2] + 3*s;    
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }

        if(flag==0)
        {
            cout << "NIE" << endl;
            continue;
        }
        else
        {
            for(lli j=i;j<n;j++)
            {
                if(A[j]==B[j])
                    continue;
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                cout << "NIE" << endl;
            else
                cout << "TAK" << endl;
        }

    }
}