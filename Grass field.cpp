include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int arr[2][2],c=0;;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
                if(arr[i][j]==1){
                    c++;
                }
            }
        }
 
        if(c==0){
            cout<<0<<endl;
        }else if(c>0 && c<4){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}
