#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int c1=0,c0=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                c1++;
            }
            else{
                c0++;
            }
            
        }

        int m = min(c0,c1);

        if(m%2==0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
    }
}
