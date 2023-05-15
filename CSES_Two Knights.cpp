#include<iostream>
using namespace std;
int main(){
    typedef long long ll;
    ll T=0;
    cin>>T;
    for(int n=1;n<T+1;n++){
        ll result = 0;
        result = n * n;
        result = result * result - result;
        result = result / 2;
        result = result - 4 * (n - 1) * (n - 2);
        cout << result << endl;
    }
    return 0;
}