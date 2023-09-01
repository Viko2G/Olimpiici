#include <bits/stdc++.h>
using namespace std;

int a[1501][1501];
int b[1501][1501]= {{-1,-1}, {-1}};

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout .tie(NULL);
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> a[i][j];
            b[i][j]=-1;
        }
    }
    b[n-1][m-1]=0;
    for(int t=0; t<m+n; t++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                //cout << a[i][j] << " ";
                if(b[i][j]==t)
                {

                    //cout << i << " " << j << endl;
                    if(i>0 && b[i-1][j]==-1)
                    {
                        b[i-1][j]=t+1;
                        int x=a[i][j];
                        if(j<m-1)
                        {
                            x=max(x, a[i-1][j+1]);
                        }
                        a[i-1][j]+=x;
                    }
                    if(j>0 && b[i][j-1]==-1)
                    {
                        b[i][j-1]=t+1;
                        int x=a[i][j];
                        if(j<m-1)
                        {
                            x=max(x, a[i+1][j-1]);
                        }
                        a[i][j-1]+=x;
                    }
                }
            }
            //cout << endl;
        }
    }
    cout << a[0][0];
    return 0;
}
