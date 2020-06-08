#include<bits/stdc++.h>

using namespace std;


typedef long long ll;

int main()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> c(n);
    vector<ll> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];cin>>b[i];cin>>c[i];
    }
    for(int i=1;i<n;i++)
    {
        a[i]+=max(b[i-1],c[i-1]);
        b[i]+=max(a[i-1],c[i-1]);
        c[i]+=max(b[i-1],a[i-1]);
    }
    cout<<max(a[n-1],max(b[n-1],c[n-1]));
}
