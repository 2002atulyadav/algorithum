#include<bits/stdc++.h>
using namespace std;
#define int long long int

// first i have to find the direction then calculate the value

void solve(){
  int n,m;
  cin>>n>>m;
  int mx=max(n,m);
  // first go for the direction
  int st= (mx-1)*(mx-1)+1;
//   cout<<st<<"printed st"<<endl;
  if(mx%2==0){
     if(m>=n){ 
        // cout<<"line 16"<<endl;
        cout<<st+n-1<<endl;
     }
     else{
        // cout<<"line 20"<<endl;
        cout<<st+mx+mx-m-1<<endl;
     }
  }
  else{
    if(n>=m){
        // cout<<"line 26"<<endl;
        cout<<st+m-1<<endl;
    }
    else{
        // cout<<"line 30"<<endl;
        cout<<st+mx+mx-n-1<<endl;
    }
  }
}
int32_t main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}
