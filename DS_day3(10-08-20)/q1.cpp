// kadane’s algorithm

#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int Max_SS(int arr[],int n){
    

    int curr_sum = 0;
    int max_sum = 0;

    

    for(int i=0;i<n;i++){
        for(int j=i;j<=n;j++){

            curr_sum = 0;
            for(int k=i;k<j;k++){
                curr_sum = curr_sum+arr[k];
            }
            if(curr_sum>max_sum){
                max_sum = curr_sum;
            }
            
        }
    }

    
    return max_sum;
}
int main(){

    int tc;
    cin>>tc;

    for(int i=0;i<tc;i++){
        int n;
        cin>>n;
        
        int arr[100000];

        for(int x=0;x<n;x++){
            cin>>arr[x];
        }

        cout<<Max_SS(arr,n)<<endl;




    }

    return 0;
}

