#include <iostream>

// Includes

using namespace std;



int main()
{
  iostream::sync_with_stdio(false);
  cin.tie(NULL);
  int x;
  int z,h,m;
  cin>>z>>x>>h>>m;
  if(z==0){
    h+=x/2;
    x%=2;
    if(x)m+=x/2*30;
  }else if(z==1){
    h+=x;
  }else{
    h+=x*2;
  }
  if(m>59){h++;m%=60;}
  cout<<h%24<<' '<<m<<'\n';
  return 0;
}
