#include <iostream>


using namespace std;


int main()
{
  iostream::sync_with_stdio(false);
  cin.tie(NULL);

  int a,lk=10000000,mx=0;
  cin>>a;
  a/=52;
  a/=7;
  for(int i=1; 3*i<a; i++){
    if(mx<a-3*i&&a-3*i<=100) {mx=a-3*i;lk=i;}

  }
  cout<<mx<<'\n'<<lk<<'\n';
  return 0;
}
