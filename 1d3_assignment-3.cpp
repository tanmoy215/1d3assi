#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{1,2,3,5,1,2,4,3,4};
    int n = arr.size();
    vector<int> ans(n);
    bool flag = false;
    int val = arr[0];
    for(int i=0;i<n;i++){
        int count = 0;
         for(int j=0;j<n;j++){
            if(i==j) continue;
             if(arr[i]==arr[j]){
                count++;
             }
         }
         if(count<1){
            val=arr[i];
         }
    }
    cout<<"Final ans is : "<<val<<endl;
    return 0;
}