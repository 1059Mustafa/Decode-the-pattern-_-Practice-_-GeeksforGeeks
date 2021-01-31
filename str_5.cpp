#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        string res[n+1];
        res[1]="1";
        res[2]="11";
        
        for(int j=3;j<=n;j++){
            string prev = res[j-1];
            string cur="";
            for(int i=0;i<prev.size();i++){
                int cnt=1;
                while(i<prev.size()-1 && prev[i]==prev[i+1]){
                    cnt++;
                    i++;
                }
                cur += to_string(cnt) + prev[i];
            }
            res[j]=cur;
        }
        
        // for(int i=1;i<=10;i++)
        cout<<res[n]<<endl;
        
    }
    return 0;
}
