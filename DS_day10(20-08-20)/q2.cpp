#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

int Binary_search(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}



int main(){
    int n,m;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;

    // auto itr =   upper_bound(arr,arr+n,m);
    // int idx = itr - arr -1;
    // if(idx == n){
    //     cout<<-1;
    // }  
    // else{
    //     cout<<"index is "<<idx;
    // }

    cout<<Binary_search(arr,n,m);


    return 0;
}

