#include<iostream>
using namespace std;
void solution(int n,int a,int b,int c){
    if(n<1)
    return;
    solution(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    solution(n-1,b,a,c);
}
int main(){
    int n=0;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    solution(n,1,2,3);
    return 0;
}