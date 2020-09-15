#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

int summation(int arr[],int n){
    // int arr[6];
    // for(int i=0;i<5;i++){
    //     cin>>arr[i];
    // }

    int sum=0;
    for(int j=0;j<n;j++){
        sum = sum + arr[j];
    }

    return sum;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int sum=0;
    // for(int j=0;j<5;j++){
    //     sum = sum + arr[j];
    // }
    cout<<summation(arr,n);
    return 0;
}

