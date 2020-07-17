//Stay Safe :)

#include <bits/stdc++.h>
// video : https://w...content-available-to-author-only...e.com/watch?v=JELQ7dtnChI
using namespace std;
#define lli long long int

int main() {
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        lli a[n];
        for(lli i=0;i<n;i++){
            cin>>a[i];
            a[i] = a[i]%4;
        }
        lli cnt=0;
        map<lli,pair<lli,lli>> mp;
        // from left hand side
        for(lli i=0;i<n;i++){
            if(a[i]==2 or a[i]==-2){
                mp[i].first = cnt;
                cnt=0;
            }
            else{
                if(a[i]==0)
                    cnt=0;
                else
                    cnt++;
            }
        }

        // again initaialize count zero
        cnt=0;

        //from right hand side
        for(lli i=n-1;i>=0;i--){
            if(a[i]==2 or a[i]==-2){
                mp[i].second = cnt;
                cnt=0;
            }
            else{
                if(a[i]==0)
                    cnt=0;
                else
                    cnt++;
            }
        }

        lli invalid=0;

        /*

        //uncomment if u want to see all x and y

        cout<<"index      x       y"<<endl;
        for(auto xt : mp){
            cout<<xt.first<<"     "<<xt.second.first<<"         "<<xt.second.second<<endl;
        }

        //uncomment if u want to see all x+1 and y+1

        cout<<"index      x+1       y+1"<<endl;
        for(auto xt : mp){
            cout<<xt.first<<"     "<<(xt.second.first)+1<<"         "<<(xt.second.second)+1<<endl;
        }
        */
        for(auto xt : mp){
            lli x = xt.second.first;
            lli y = xt.second.second;
            invalid = invalid + (x+1)*(y+1);
        }
        lli total = n*(n+1)/2;
        lli good = total-invalid;
        cout<<good<<endl;
    }
}
