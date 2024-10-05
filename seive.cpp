#include<bits/stdc++.h>
using namespace std;
#define int long long int

int prime[100001];
void seive(){
    int mx=100000;
    for(int i=0;i<=mx;i++){
        prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for(int i=2;i*i<=mx; i++){
        if(prime[i]){
        for(int j=i*i;j<=mx;j+=i){
            prime[j]=0;
        }
        }
    }
    for(int i=0;i<=1000;i++){
        cout<<i<<' '<<prime[i]<<endl;
    }
}

int32_t main(){
     int test_case=1;
    //  cin>>test_case;
     while(test_case--){
       seive();
     }

}