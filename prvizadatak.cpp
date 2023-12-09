#include <iostream>

// Includes

using namespace std;



int main()
{
  iostream::sync_with_stdio(false);
  cin.tie(NULL);

  int n,a,b,c,o=0;
  cin>>n;
  while(n--){
    cin>>a>>b>>c;
    if(a+b+c>1)o++;
  }
  cout<<o<<'\n';
  return 0;
}
