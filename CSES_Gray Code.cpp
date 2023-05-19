#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    vector<string> arr;
    arr.push_back("0");
    arr.push_back("1");
    for (int l = arr.size(), j = 1; j < n;l*=2,j++)
    {
        for(int i=l-1;i>=0;i--)
        arr.push_back("1"+arr[i]);
        for(int i=0;i<l;i++)
        arr[i]="0"+arr[i];
    }
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    return 0;
}