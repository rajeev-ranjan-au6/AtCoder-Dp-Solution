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
    string a,b;
    cin>>a>>b;
    int A=a.size();
    int B=b.size();
    int dp[A+1][B+1];
    for(int i=0;i<=A;i++)
    {
        dp[i][0]=0;
    }
    for(int i=0;i<=B;i++)
    {
        dp[0][i]=0;
    }
    for(int i=1;i<=A;i++)
    {
        for(int j=1;j<=B;j++)
        {
            if(a[i-1]==b[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    //cout<<dp[A][B]<<endl;
    string str;
    int I=A;
    int J=B;
    while(I>0&&J>0)
    {
        if(I==0||J==0)break;
        if(dp[I-1][J]==dp[I][J])
            I--;
        else if(dp[I][J-1]==dp[I][J])
            J--;
        else
        {
            str=str+a[I-1];
            I--;
            J--;
        }
    }
    reverse(str.begin(),str.end());
    pf(str);
}
