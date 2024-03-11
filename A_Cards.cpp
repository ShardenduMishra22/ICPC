#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt_z=0,cnt_n=0;
    cin>>n;
    char str[n+1];
    for(int i=0;i<n+1;i++){
        cin>>str[i];
        if(str[i]=='z'){
            cnt_z+=1;
        }else if(str[i]=='n'){
            cnt_n+=1;
        }
    }
    for(int i=1;i<=cnt_n;i++){
        cout<<"1 ";
    }
    for(int i=1;i<=cnt_z;i++){
        cout<<"0 ";
    }
    cout<<"\n";
    return 0;
}