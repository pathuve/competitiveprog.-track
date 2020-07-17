#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    unordered_map<ll, ll> mp1, mp2, mp;
    ll Min=LONG_MAX;
    vector <ll> ar1, ar2, ar;
    for(ll i=0; i<n; i++)
    {
        ll temp;
        cin>>temp;
        mp1[temp]++;
        mp[temp]++;
        Min=min(Min, temp);
    }

    for(ll i=0; i<n; i++)
    {
        ll temp;
        cin>>temp;
        mp2[temp]++;
        mp[temp]++;
        Min=min(Min, temp);
        ar2.push_back(temp);
    }

    for(auto it: mp)
    {
        if(it.second%2!=0)
        {
            cout<<-1<<endl;
            return ;
        }
    }

    for(auto it: mp)
    {
        ll x=it.second/2;
        while(x--)
            ar.push_back(it.first);
    }

    sort(ar.begin(), ar.end());
    for(ll i=0; i<n; i++)
        ar1.push_back(-1);

    for(ll i=0; i<ar.size(); i++)
    {
        if(mp1[ar[i]])
        {
            ar1[i]=ar[i];
            mp1[ar[i]]--;
        }
    }

    for(auto it:mp1)
    {
        while(it.second>0)
        {
            for(ll j=0; j<ar.size(); j++)
            {
                if(ar1[j]==-1)
                {
                    ar1[j]=it.first;
                    it.second--;
                    break;
                }
            }
        }
    }
    ll sum=0;

    for(ll i=0; i<ar1.size(); i++)
    {
        if(ar[i]!=ar1[i])
        {
            //cout<<ar[i]<<" "<<ar1[i]<<endl;
            sum+=min(2*Min, min(ar[i], ar1[i]));
            mp2[ar1[i]]++;
            ar1[i]=ar[i];
            mp2[ar[i]]--;

            //cout<<i<<" "<<sum<<endl;
        }
    }


    cout<<sum<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
