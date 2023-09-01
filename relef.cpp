#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(n);
    v[0]=0;
    int Min=0;
    for(int i=1; i<n; i++)
    {
        if(s[i-1]=='<')
        {
            v[i]=v[i-1]+1;
        }
        else
        {
            v[i]=v[i-1]-1;
        }
        Min=min(Min, v[i]);
    }
    for(int i=0; i<n; i++)
    {
        cout << v[i] + abs(Min) << " ";
    }
    return 0;
}
