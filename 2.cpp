#include <iostream>


using namespace std;


int main()
{
  iostream::sync_with_stdio(false);
  cin.tie(NULL);

  int v1,v2,v;
  cin>>v1>>v2>>v;
  if(v<v1/2){
    cout<<"S\n";
  }
  else if(v>v1*2){
    cout<<"B\n";
  }
  else{
    cout<<"RIMAC\n";
  }
  if(v<v2/2){
    cout<<"S\n";
  }
  else if(v>v2*2){
    cout<<"B\n";
  }
  else cout<<"TESLA\n";
  return 0;
}
