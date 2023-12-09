#include <iostream>
#include <string>
// Includes

using namespace std;



int main()
{
  iostream::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  getline(cin,s);
  for(int i=0; i<s.length(); i++){
    if(s[i]==' '){
      s[i]='\n';
      continue;
    }
    if(s[i]=='b'||s[i]=='B'){
      for(int j=i-1; j>=0; j--){
        if(s[j]<=s[i]+24&&s[j]>=s[i]-1){
          s[j]='\n';
          break;
        }
      }
      s[i]='\n';
      continue;
    }
  }
  for (const char c: s){
    if(c=='\n') continue;
    cout<<c;
  }
  cout<<'\n';
  return 0;
}
