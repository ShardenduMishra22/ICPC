#include<bits/stdc++.h>
using namespace std;
#define llint long long int
 
int main(){
    
    int t;
    cin>>t;
    
    while(t--){ 
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int c=0,count=0; int c1=INT_MIN;   int flag=1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='.'){
              c++;
              count++;
            }
            
            else
            c=0;
            
            c1=max(c1,c);
            if(c1==3){
               flag=0;
               break;
            }
        }
        if(flag==0)
        cout<<"2"<<"\n";
        else
        cout<<count<<"\n";
        
    }
}