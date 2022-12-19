#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int n, i, t, x, total;
    cin >> t;
    while(t--)
    {
        total = 1;
        cin >> n;
        x = sqrt(n);
        if(x*x == n)
            total = 1-x;
        for(i = 2; i <= x; i++)
        {
            if(n % i == 0)
            {
                total += i;
                total += (n/i);
            }
        }
        cout << total << endl;
    }
    return 0;
}