#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int minCoin(int n,int dp[]){
    if(n==0){
        return 0;
    }
    // look up
    if(dp[n]!=0){
        return dp[n];
    }
    // rec-case
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;
    if((n-1)>=0){
        op1 = minCoin(n-1,dp);
    }
    if((n-7)>=0){
        op2 = minCoin(n-7,dp);
    }
    if((n-10)>=0){
        op3 = minCoin(n-10,dp);
    }
    int ans = min(min(op1,op2),op3)+1;
    dp[n] = ans;
    return ans;
}


int main() {
    int n;
    cin>>n;
    int dp[100]={0};
    cout<<minCoin(n,dp);
    return 0;
}
