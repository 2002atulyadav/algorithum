#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        } 
    }
    return true;
}
int32_t main(){
     int test_case=1;
     cin>>test_case;
     while(test_case--){
        int n;
        cin>>n;
        cout<<isPrime(n)<<endl;
     }

}