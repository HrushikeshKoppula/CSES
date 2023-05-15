#include<iostream>
using namespace std;
int main(){
    typedef long long ll;
    char a,b;
    int x=0,max=0;
    cin>>a;
    while(cin>>b){
        if(b==a)
        x++;
        else
        x=0;
        if(max<x)
        max=x;
        a=b;
    }
    cout<<max+1;
    return 0;
}