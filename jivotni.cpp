#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v[i]={x, i};
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int start=0;
    for(int i=0; i<n; i++)
    {
        if(v[i].second-v[i+1].second<=k && v[i].first==v[i+1].first)
        {
            cout << v[i].first;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
