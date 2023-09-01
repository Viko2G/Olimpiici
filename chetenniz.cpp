#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sz = 26;
    string s;
    cin >> s;
    int m=0, n=s.size();
    vector<bool>prev(sz, false);
    for(int i=0; i<s.size(); i++)
    {
        int x=int(s[i])-97;
        if(prev[x])
        {
            m+=2;
            for(int j=0; j<sz; j++)
            {
                prev[j]=false;

            }
        }
        else
        {
            prev[x]=true;
        }
    }
    cout << n-m << endl;
    return 0;
}
