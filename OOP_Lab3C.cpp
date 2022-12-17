//link-https://vjudge.net/contest/534298#problem/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
long long n,cmp=0;
  int k=0;
  cin>>n;
  while(cmp<=n){
    cmp=pow(2,k);
    k++;
  }
if(cmp==n) cout<<k-1<<endl;
else cout<<k-2<<endl;

}