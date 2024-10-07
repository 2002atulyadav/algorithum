#include<bits/stdc++.h>
using namespace std;
void primeDivisor(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }
            cout<<i<<' '<<cnt<endl;
        }
    }
}
int32_t main(){
    int n;
    cin>>n;
    primeDivisor(n);
}