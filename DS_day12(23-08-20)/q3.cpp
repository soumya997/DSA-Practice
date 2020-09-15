#include <iostream>
using namespace std;



int main() {
	int n;
    cin>>n;
    // int arr[100];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int k;
    // cin>>k;
    int dp[100] = {0};
    // cout<<subArraySum(arr,n,0,dp);
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
 
    for(int i=3;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }

    // for(auto j:dp){
    //     cout<<j<<" ";
    // }
    cout<<dp[n];
 
 
    return 0;

}