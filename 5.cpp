#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

   iostream::sync_with_stdio(false);
   cin.tie(NULL);

   int n,m,k,*amirovi,*reakcije;
   bool changed;

   cin>>n>>m;
   
   amirovi=(int*)malloc(sizeof(int)*n);
   
   for(int i=0,a; i<m; i++) {cin>>a; amirovi[a-1]=1;}
   
   cin>>k;
  
   reakcije=(int*)malloc(sizeof(int)*k*n);
   
   for(int i=0,r,l,a; i<k; i++){
      cin>>l>>r;
   
      while(l--)
      {
         cin>>a;
         reakcije[i*n+a-1]=-1;
      }
      while(r--)
      {
         cin>>a;
         if(reakcije[i*n+a-1]!=-1) reakcije[i*n+a-1]=1;
      }
   }
   
   for(int i=0; i<k; i++){
      changed=false;
      for(int j=0; j<n; j++){
         if(reakcije[i*n+j]==-1&&amirovi[j]!=1) break;
         if(j==n-1){
            for(int k=0; k<n; k++){
               if(reakcije[i*n+k]==1)
               {
                  amirovi[k]=1;
                  changed=true;
               }
               reakcije[i*n+k]=0;
            }
         }
      }
      if(changed&&i!=0) i=-1;
   }

   int count=0;
   for(int i=0; i<n; i++) if(amirovi[i]==1) count++;
   cout<<count<<'\n';
   for(int i=0; i<n; i++){
      if(amirovi[i]==1)
      {
         cout<<i+1;
         if(i!=n-1) cout<<' ';
      }
      if(i==n-1) break;
   }
   cout<<'\n';
   free(amirovi);
   free(reakcije);
   return 0;
}
