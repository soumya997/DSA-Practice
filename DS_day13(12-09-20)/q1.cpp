#include <iostream>
#include <algorithm>
using namespace std;

// int best = 0;

int rodCut(int n,int arr[],int dp[]){
    // if(n<0){
    //     return 0;
    // }
    if(n==0){
        return 0;
    }
    // if(n==2){
    //     return 2;
    // }
    if(dp[n]!=0){
        return dp[n];
    }
    int best = 0;
    for(int i=1;i<=n;i++){
        int cut = rodCut(n-i,arr,dp);
        dp[i] = cut;
        int netProfit = arr[i] + cut;
        best = max(best,netProfit);
    }

    return best;

    // int a = rodCut(n-1)+2;
    // int b = rodCut(n-2)+3;
    // int c = rodCut(n-3)+2;
    // int d = rodCut(n-4)+5;
    // cout<<"val "<<c<<endl;
    // return max(max(a,b),max(c,d));
    // return ;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int dp[100] = {0};

    cout<<rodCut(n,arr,dp);
    return 0;
}
