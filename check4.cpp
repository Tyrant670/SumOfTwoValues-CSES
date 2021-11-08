/**
 *    author:  Tyrant67
 *    created: 08.11.2021       
**/
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
using namespace std;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
const int mod = 1e9 + 7;
const int MAXN = 2e6;
const int inf = 0x3f3f3f3f;    
 
void IO(){
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve(){
    int n,x; cin>>n>>x; 
    int arr[n];
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    map<int ,int> m;
 
    for(int i=0;i<n;i++){
        if(m.count(x-arr[i])){
            cout<<i+1<<" "<<m[x-arr[i]]<<endl;
            return ;
        }
        m[arr[i]]=i+1;
    }
    cout<<"IMPOSSIBLE"<<endl;
 
 
    // hope
}
 
 
signed main(){
    IO();
    int tc; tc=1;
    //cin>>tc;
    while(tc--){
        solve();
    }
 
    // hope
    return 0;
}