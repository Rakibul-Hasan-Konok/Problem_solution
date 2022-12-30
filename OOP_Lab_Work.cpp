#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
while(n!=0){
if(n%500==0){
  cout<<"500"<<" ";
  n=n-500;}
else if(n%100==0){
    cout<<"100"<<" ";
  n=n-100;
}
else if(n%50==0){
    cout<<"50"<<" ";
  n=n-50;
}
else if(n%10==0){
    cout<<"10"<<" ";
  n=n-10;
}
else if(n%5==0){
    cout<<"5"<<" ";
  n=n-5;
}
else{
    cout<<"1"<<" ";
  n=n-1;
}
}
cout<<endl;

}



