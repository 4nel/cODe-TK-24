#include <iostream>

// Includes

using namespace std;



int main()
{
  iostream::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  for(int i=1; i<n; i++){
    for(int j=1; j<n; j++){
      if(i+j<n)cout<<i<<' '<<j<<' '<<n-i-j<<'\n';
    }
  }

  return 0;
}
