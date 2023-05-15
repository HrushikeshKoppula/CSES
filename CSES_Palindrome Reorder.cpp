#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int a[26],c=0,j=-1;
    for(int i=0;i<26;i++)
    a[i]=0;
    for(int i=0;i<str.size();i++)
    a[str[i]-'A']++;
    // for(int i=0;i<26;i++)
    // cout<<a[i]<<" ";
    for(int i=0;i<25;i++){
        if(a[i]%2==1){
            c++;
            j=i;
        }
        if(c>1){
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }
    }
    string ans[str.size()/2];
    int l=0;
    for(int i=0;i<26;i++){
        for(int k=0;k<a[i]/2;k++){
            ans[l]=char(i+'A');
            l++;
        }
    }
    for(int i=0;i<str.size()/2;i++)
    cout<<ans[i];
    if(j!=-1)
    cout<<char(j+'A');
    for(int i=str.size()/2-1;i>=0;i--)
    cout<<ans[i];
    /*
    sort(str.begin(),str.end());
    int n=str.size();
    for(int i=0;i<n/2;i++){
        bool found=false;
        if(str[i+1]==str[i]){
            swap<char>(str[i+1],str[n-i-1]);
            found=true;
        }
        if(!found){
            swap<char>(str[i],str[n/2]);
            i=i-1;
            sort(str.begin()+i,str.end()-i-1);
        }
    }
    cout<<str<<endl;
    */
    return 0;
}