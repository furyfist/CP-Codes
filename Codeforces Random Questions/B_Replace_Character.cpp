#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const ll MOD = 1e9 + 7;
 
#define pn cout << "NO\n";
#define py cout << "YES\n";
 
// vector<ll> dp;
 
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char,ll>mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    vector<pair<ll,char>>arr;
    char maxichar=s[0];
    char minichar=s[0];
    for(auto &it:mp){
        arr.push_back({it.second,it.first});
    }
    sort(arr.rbegin(),arr.rend());
    maxichar=arr[0].second;
    minichar=arr[arr.size()-1].second;
    // cout<<maxichar<<" "<<minichar<<endl;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==minichar){
            s[i]=maxichar;
            break;
        }
    }
    cout<<s<<endl;
    return;
    
 
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}