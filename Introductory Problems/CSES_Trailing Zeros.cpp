#include<iostream>
using namespace std;
int main(){
    typedef long long ll;
    ll n=0;
    cin>>n;
    int x=0;
    while(n){
        n/=5;
        x+=n;
    }
    cout<<x<<endl;
    return 0;
}