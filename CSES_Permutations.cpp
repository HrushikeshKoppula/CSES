#include<iostream>
using namespace std;
int main(){
    typedef long long ll;
    ll n=0;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n<=3){
        cout << "NO SOLUTION";
        return 0;
    }
    for(ll i=2-n%2;i<=n;i+=2)
    cout<<i<<" ";
    for(ll i=1+n%2;i<n;i+=2)
    cout<<i<<" ";
    return 0;
}