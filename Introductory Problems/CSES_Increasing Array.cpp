#include<iostream>
using namespace std;
int main(){
    typedef long long ll;
    ll n=0;
    cin>>n;
    //ll a[n];
    //for(ll i=0;i<n)
    //cin>>a[i];
    ll min=0,x=0,sum=0;
    cin>>min;
    n--;
    while(n--){
        cin>>x;
        if(x<min)
        sum=sum+min-x;
        else
        min=x;
    }
    cout<<sum;
    return 0;
}