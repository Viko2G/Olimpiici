#include <bits/stdc++.h>
using namespace std;

string obiknovennaDrobKumDesetichna(int chislitel, int znamenatel)
{
    string ans = "";
    map<int, int> mp;
    int pos = -1;

    if((long long)chislitel * (long long)znamenatel < 0)
    {
        ans.push_back('-');
    }

    chislitel = abs(chislitel);
    znamenatel = abs(znamenatel);

    ans += to_string(chislitel/znamenatel);
    int cpos = ans.length()+1;


    if(chislitel%znamenatel != 0)
    {
        ans.push_back('.');
    }

    while(chislitel%znamenatel != 0)
    {
        chislitel = chislitel%znamenatel;
        if(mp[chislitel] != 0)
        {
            pos = mp[chislitel];
            break;
        }
        mp[chislitel] = cpos;
        chislitel *= 10;
        ans.push_back('0' + chislitel/znamenatel);
        cpos++;
    }

    if(pos != -1)
    {
        ans = ans.substr(0, pos) + "(" + ans.substr(pos) + ")";
    }

    return ans;
}

int main()
{
    string s;
    getline(cin, s, '/');
    string s1;
    cin >> s1;
    int a, b;
    a=stoi(s);
    b=stoi(s1);
    cout << obiknovennaDrobKumDesetichna(a, b) << endl;
    return 0;
}
