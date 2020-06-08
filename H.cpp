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
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int n,m;
    sf(n);sf(m);
    vector<string> a(n);
    in(i,n)
    {
        sf(a[i]);
    }
    int dp[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            dp[i][j]=0;
    }
    dp[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='#'){
                    dp[i][j]=0;
                    continue;
            }
            if(i-1>=0)dp[i][j]=dp[i-1][j]%INF;
            if(j-1>=0)dp[i][j]=(dp[i][j]+(dp[i][j-1]%INF))%INF;
        }
    }
    /*in(i,n)
    {
        in(j,m)
        {
            cout<<dp[i][j];ps();
        }
        cout<<endl;
    }*/
    cout<<dp[n-1][m-1]<<endl;
}
