#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>

using namespace std;

int kadane(int arr[],int n){

    

    int totalSum = 0, maxSum = INT_MIN, minSum = INT_MAX;
    int curMax = 0, curMin = 0;
    for (int a=0;a<n;a++) {
            totalSum += arr[a];
            
            // max sum
            curMax += arr[a];
            maxSum = max(curMax, maxSum);
            curMax = max(curMax, 0);
            
            // min sum
            curMin += arr[a];
            minSum = min(curMin, minSum);
            curMin = min(curMin, 0);
        }
        if (maxSum < 0)
            return maxSum;
        else
            return max(maxSum, totalSum - minSum);
}

int main(){
    
    int tc;
    cin>>tc;
    
    for(int k=0;k<tc;k++){
        int n;
        int curr_sum = 0;
        int max_sum = 0;

        
        cin>>n;
        int arr[1000];
        for(int x=0;x<n;x++){
            cin>>arr[x];
        }    

        cout<<kadane(arr,n);

    }
    
    // int n;
    // int curr_sum = 0;
    // int max_sum = 0;

    
    // cin>>n;
    // int arr[100];
    // for(int x=0;x<n;x++){
    //     cin>>arr[x];
    // }    

    // cout<<kadane(arr,n);
    return 0;
}

