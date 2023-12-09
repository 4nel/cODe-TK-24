#include <iostream>

// Includes

using namespace std;

int sumDigit(int a)
{
  if(!a) return 0;
  return a%10 + sumDigit(a/10);
}

int main()
{
  iostream::sync_with_stdio(false);
  cin.tie(NULL);
 
  int n,count=0;
  cin>>n;
  // Prvenstveno  a+b+c==n
  // Drugenstveno A+B+C==N
  int N=sumDigit(n);
  for(int a=0,A; a<=n; a++){
    A=sumDigit(a);
    if(A>N) continue; 
    for(int b=0,B; b<=n-a; b++){
      B=sumDigit(b);
      if(B>N-A) continue;
      if(sumDigit(n-a-b)==N-A-B) count++;
    }
  }
  cout<<count<<'\n';
  return 0;
}
