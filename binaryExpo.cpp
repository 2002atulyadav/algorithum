#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

int binaryExpo(int base,in pow){
   int res=1;
   while(pow>0){
     if(pow%2){
        res=(res*base)%mod;
        pow--;
     }
     else{
        res*=res%mod;
        pow/=2;
     }
   }
   return res;
}