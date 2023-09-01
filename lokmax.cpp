#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int Min=INT_MAX, start=0;
    for(int i=1; v[i]!=0; i++)
    {
        if(start!=0 && v[i]>v[i-1] && v[i]>v[i+1] && i!=start)
        {
            Min=min(Min, i-start-1);
            //cout << Min << " " << i << endl;
            start=i;
        }
        if(start==0 && v[i+1]!=0 && v[i]>v[i-1] && v[i]>v[i+1])
        {
            start=i;
            //cout << start << endl;
        }

    }
    if(Min!=INT_MAX)
    {
        cout << Min;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
