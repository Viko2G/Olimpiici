#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<int> v1;
    int start=0;
    for(int i=0; i<n; i++)
    {
        if(v[i+1]!=v[i] || i==n-1)
        {
            v1.push_back(i-start+1);
            start=i+1;
        }
    }
    int ans=0;
    for(int i=0; i<v1.size(); i++)
    {
        if(v1[i]%(p*q)!=0)
        {
            ans+=v1[i]/(p*q)+1;
            cout << v1[i]/(p*q)+1 << " ";
        }
        else
        {
            ans+=v1[i]/(p*q);
        }
    }
    if(ans%(m*2)!=0)
    {
        ans/=(m*2);
        ans++;
    }
    else
    {
        ans/=(m*2);
    }
    cout << ans;
    return 0;
}
