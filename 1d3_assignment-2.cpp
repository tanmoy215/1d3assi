#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cout<<"enter value : ";
    cin>>n;
    long long fact = 1;
    for(long long i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"Final ans is : "<<fact<<endl;
    return 0;
}