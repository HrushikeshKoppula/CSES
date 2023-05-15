#include<iostream>
using namespace std;
int main(){
    typedef long long ll;
    ll n = 0, x = 0;
    cin >> n;
    ll sum1 = 0,sum2 = 0;
    sum1 = (n*(n+1))/2;
    //cout << sum1; 
       for(int i=1;i<n;i++){
           cin>>x;
           sum2+=x;
       }
       cout<<sum1-sum2;
    return 0;
}