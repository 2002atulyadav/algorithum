#include<bits/stdc++.h>
using namespace std;
// #define int long long int

bool prime[90000001];
vector<int> seive(){
    int mx=90000000;
    for(int i=0;i<=mx;i++){
        prime[i]=true;
    }

    vector<int>ans;
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=mx; i++){
        if(prime[i]){
            
        for(int j=i*i;j<=mx;j+=i){
            prime[j]=false;
        }
        }
    }
   for(int i=0;i<mx;i++){
    if(prime[i])
    ans.push_back(i);
   }
   return ans;
}

int32_t main(){
     int test_case=1;
     cin>>test_case;
     int arr[test_case];
     for(int i=0;i<test_case;i++)
       cin>>arr[i];
     vector<int>ans=seive();
    //  cout<< ans.size()<<endl;
    for(int i=0;i<test_case;i++){
      
       cout<<ans[arr[i]-1]<<endl;
     }

}