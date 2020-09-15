#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int RainBucket(int arr[],int ipt_size){
    int sum = 0;
    
    for(int i=0;i<ipt_size;i++){
        if(arr[i]-arr[i+1]>0 && arr[i+1]-arr[i+2]<0){
            int amt_water1 = abs(arr[i]-arr[i+1]); 
            int amt_water2 = abs(arr[i]-arr[i+2]);
            if(amt_water1>amt_water2){
                sum = sum + amt_water1;
            }
            else{
                sum = sum + amt_water2;
            }

        }
    }
    return sum;
}

int maxWater(int arr[], int n)
{

// To store the maximum water  
// that can be stored 
int res = 0; 

// For every element of the array 
for (int i = 1; i < n-1; i++) { 

    // Find the maximum element on its left 
    int left = arr[i]; 
    for (int j=0; j<i; j++) 
       left = max(left, arr[j]); 

    // Find the maximum element on its right    
    int right = arr[i]; 
    for (int j=i+1; j<n; j++) 
       right = max(right, arr[j]);  

   // Update the maximum water     
   res = res + (min(left, right) - arr[i]);    
} 

return res;  
}


int main(){
    int ipt_size;
    cin>>ipt_size;
    int arr[ipt_size];
    for(int i=0;i<ipt_size;i++){
        cin>>arr[i];
    }    

    cout<<maxWater(arr,ipt_size);
    
    return 0;
}

