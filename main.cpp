#include<bits/stdc++.h>
using namespace std;
#define int long long int


void solve(string &str){
   int ans=1;
   int cur=1;
   int sz=str.size();
   for(int i=1;i<sz;i++){
      if(str[i]!=str[i-1]){
          cur=1;
      }
      else{
        cur++;
      }
      ans=max(ans,cur);
   }
   
   cout<<ans<<endl;
}
int32_t main(){
    string n;
    cin>>n;
    solve(n);
}
