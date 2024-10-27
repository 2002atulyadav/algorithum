#include<bits/stdc++.h>
using namespace std;

int factor[90000001];
int mx=90000000;
void primeFactorSieve(){
    for(int i=1;i<=mx;i++){
        factor[i]=-1;
    }
    for(int i=2;i<=mx;i++){
        if(factor[i]==-1){
            factor[i]=i;
            for(int j=i;j<=mx;j+=i){
                factor[j]=i;
            }
        }
    }
}