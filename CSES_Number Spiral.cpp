#include<iostream>
using namespace std;
int main(){
    typedef long long ll;
    ll T=0;
    cin>>T;
    while(T--){
        ll x=0,y=0,max=0,val=0;
        cin>>x>>y;
        if(x<y)
        max=y;
        else
        max=x;
        val=max*max-max+1;
        if(max%2==0)
        val=val+x-y;
        else
        val=val+y-x;
        cout<<val<<endl;
    }
    return 0;
}