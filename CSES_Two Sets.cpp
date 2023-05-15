#include<iostream>
using namespace std;
int main(){
    typedef long long ll;
    ll n=0,k=0;
    cin>>n;
    k=n/4;
    if(n%4==0){
        cout<<"YES"<<endl;
        cout<<2*k<<endl;
        for(int i=1;i<=k;i++){
            cout<<i<<" "<<n-i+1<<" ";
        }
        cout<<endl<<2*k<<endl;
        for(int i=k+1;i<=2*k;i++){
            cout<<i<<" "<<n-i+1<<" ";
        }
    }
    else if(n%4==3){
        cout<<"YES"<<endl;
        cout<<2*k+2<<endl;
        for(int i=1;i<=k+1;i++){
            cout<<i<<" "<<n-i<<" ";
        }
        cout<<endl<<2*k+1<<endl;
        for(int i=k+2;i<=2*k+1;i++){
            cout<<i<<" "<<n-i<<" ";
        }
        cout<<n<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}