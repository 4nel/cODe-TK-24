#include <iostream>

using namespace std;

int main()
{
  iostream::sync_with_stdio(false);
  cin.tie(NULL);

  int n,m,k;
  cin>>n>>m;
  int amir[n],count=0;
  bool stillgoing;
  for(int i=0; i<n; i++) amir[i]=0;
  for(int i=0,a; i<m; i++){
    cin>>a;
    amir[a-1]++;
  }
  cin>>k;
  int dummy[n];
  for(int i=0,l,r; i<k; i++){
    for(int j=0; j<n; j++) dummy[j]=amir[j];
    cin>>l>>r;
    stillgoing=true;
    for(int j=0,a; j<l; j++){
      cin>>a;
      if(dummy[a-1]) continue;
      else {
        stillgoing=false;
        break;
      }
    }
    for(int j=0,a; j<r; j++){
      cin>>a;
      if(stillgoing&&amir[a-1]==0) amir[a-1]++;
    }
  }
  for(int i=0; i<n; i++) if(amir[i]!=0) count++;
  cout<<count<<'\n';
  for(int i=0; i<n; i++) if(amir[i]!=0) cout<<i+1<<(i==n-1?'\n':' ');
  return 0;
}
