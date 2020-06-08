    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n;
        cin>>n;
        vector<int> a(n+1);
        vector<int> b(n+1);
        a[0]=99999;
        b[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=2;i<=n;i++)
        {
            b[i]=min(abs(a[i]-a[i-1])+b[i-1],abs(a[i]-a[i-2])+b[i-2]);
            //cout<<b[i]<<endl;
            //cout<<abs(a[i]-a[i-1])<<endl;
            //cout<<abs(a[i]-a[i-2])<<endl;
        }
        cout<<b[n];
    }
