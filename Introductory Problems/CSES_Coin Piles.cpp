#include<iostream>
using namespace std;
int main(){
    typedef long long ll;
    int T=0;
    cin>>T;
    while(T--){
        ll a=0,b=0;
        cin>>a>>b;
        if(a<=2*b&&b<=2*a&&(a+b)%3==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}