#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,1,3,1,4,6,2,6};
    int n = sizeof(arr)/sizeof(int);
     int sum =0;
     for(int i=0;i<3;i++){
        sum+=arr[i];
     }
     int idx  =-1;
     int x;
     cout<<"enter value : ";
     cin>>x;
      int i=1,j=3;
     if(sum==x){
        idx = 0;
     }
     else{
         while(j<n){
        sum+=arr[j]-arr[i-1];
        if(sum==x){
            idx = i;
            break;
        }
        i++;
        j++;
     }
     }
     cout<<"Final ans is : ["<<arr[idx]<<","<<arr[idx+1]<<","<<arr[idx+2]<<"]"<<endl;
    return 0;
}