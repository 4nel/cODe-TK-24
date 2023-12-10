#include <iostream>

// Includes

using namespace std;



int main()
{
  iostream::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  for(int i=1; i<=6; i++){
    for(int j=1; j<=6; j++){
      if(n-i-j<=6)cout<<i<<' '<<j<<' '<<n-i-j<<'\n';
    }
  }

  return 0;
}
