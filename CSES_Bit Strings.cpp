#include<iostream>
using namespace std;
int main(){
    typedef long long ll;
    ll n=0;
    cin>>n;
    //ll modulo = 1e9+7;
    ll mod = 1000000007;
    ll val = 1 ;
    for(int i=0;i<n;i++){
        val=(val%mod)*2;
    }
    cout<<val%mod;//%mod<<endl;
    return 0;
}