#include <iostream>
using namespace std;

int main ()
{
    int x;
    cin >> x;
    int a, b, c, d, br=0;
    for (a=1; a<=x/4; a++)
    {
        for (b=a; b<=(x-a)/3; b++)
        {
            for (c=b; c<=(x-(a+b))/2; c++)
            {
                d=x-(a+b+c);
                if (d>=c)
                {
                    br++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout << br;
    return 0;
}
