#include<iostream>
using namespace std;
int main(){
int a,b,c=5;
cin>>a>>b;
cout<<(a+b-c)/5;
int arr[a],sum=0;
  for(int i=0;i<a;i++)cin>>arr[i],sum+=arr[i];
  cout<<sum;
return 0;
}
