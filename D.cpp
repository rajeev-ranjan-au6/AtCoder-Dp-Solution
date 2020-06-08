#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#include <iostream>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;

#define pf(n) cout << n << endl
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
/**  '' "\n" ^ **/


typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    new_data_set;
int INF=1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,w;
    sf(n);sf(w);
    ll a[n+1];
    ll b[n+1];
    in(i,n)
    {
        sf(a[i+1]);sf(b[i+1]);
    }
    ll dp[n+1][w+1];
    for(int i=0;i<=n;i++)
        dp[i][0]=0;
    for(int j=0;j<=w;j++)dp[0][j]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(a[i]<=j)
            {
                dp[i][j]=max(b[i]+dp[i-1][j-a[i]],dp[i-1][j]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    /*for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            cout<<dp[i][j];ps();
        }
        cout<<endl;
    }*/
    cout<<dp[n][w]<<endl;
}
