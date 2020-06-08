#include<bits/stdc++.h>

using namespace std;


typedef long long ll;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<ll> a(n+1);
    vector<ll> b(n+1);
    a[0]=99999;
    b[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=2;i<=n;i++)
    {
        b[i]=99999999999999;
        for(int j=1,l=i-1;l>0&&j<=k;l--,j++)
        {
           b[i]=min(abs(a[i]-a[l])+b[l],b[i]);
        }
    }
    cout<<b[n];
}
