#include<bits/stdc++.h>
using namespace std;

int main()
{

int n,cnt=0;
cin>>n;
int rootOfN=sqrt(n);
if(n<2) cout<<"Not Prime\n";
else if(n<=3) cout<<"Prime\n";
else if(n%2==0) cout<<"Not Prime\n";
else
{
    for(int i=3;i<=rootOfN;i+=2){
        if(n%i==0){
          cout<<"Not Prime\n";
          cnt++;
          break;
        } 
    }

}
if(cnt==0){
    cout<<"Prime\n";
}



}