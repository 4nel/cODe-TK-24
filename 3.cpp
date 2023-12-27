#include <iostream>


using namespace std;


int main()
{
  iostream::sync_with_stdio(false);
  cin.tie(NULL);

  int n,g,count=0,countw,max=0;
  cin>>n;
  int arr[n],i=0;
  for(int a:arr) a=0;
  while(n--){
    cin>>g;
    countw=0;
    for(const int gi:arr){
      if(gi==g){
        countw++;
      }
    }
    if(countw==0)count++;
    else if(countw%2==0)count++;
    else count--;
    if(max<count) max=count;
    arr[i]=g;
    i++;
  }
  cout<<max<<'\n';
  return 0;
}
