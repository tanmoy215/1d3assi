#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> arr{1,2,5,6,8,6,8,9,5,8,7};
     vector<int> sub{8,9,5};
     int sum = 0;
     int asum = 0;
     for(int i=0;i<sub.size();i++){
         sum+=sub[i];
         asum+=arr[i];
     }
     bool flag = true;
     int i=1,j=sub.size();
     if(sum==asum) {
        cout<<"Yes";
     }
     else{
        while(j<arr.size()){
            asum+=arr[j]-arr[i-1];
        if(sum==asum){
            cout<<"Yes";
            flag = false;
            break;
        }
        i++;
        j++;
        }
        
     }
     if(flag) cout<<"NO";

    return 0;
}