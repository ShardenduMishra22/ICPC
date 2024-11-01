#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,cnt1=0,cnt2=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n+1;i++){
        if(str[i] == 'F' && str[i+1] == 'S'){
            cnt1+=1;
        }else if(str[i+1] == 'F' && str[i] == 'S'){
            cnt2+=1;
        }
    }
    if(cnt2-cnt1>0){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}
