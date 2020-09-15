#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // cout<<0<<" "<<1;
    int q;
    int count = 0;
    int sum = 0;
    cin>>q;
    int arr[q];
    for(int i=0;i<q;i++){
        cin>>arr[i];
    }
    for(int l=0;l<q;l++){
        for(int i=2;i<1000;i++){
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    count++;

                }
            }
            if(count==2){

                
                int in[arr[l]];
                for(int n=0;n<arr[l];n++){
                    in[n] = i;
                }

                for(int p=0;p<arr[l];p++){
                    sum = sum + in[p];
                }
                cout<<sum<<endl;
                

            }
            cout<<sum<<endl;
        }
        cout<<sum<<endl;

    }
    cout<<sum<<endl;
    // for(int i=2;i<1000;i++){
    //     for(int j=1;j<=i;j++){
    //         if(i%j==0){
    //             count++;

    //         }
    //     }
    //     if(count==2){
    //         // for(int l=0;l<q;l++){
    //             int sum=0;
    //             for(int m=0;m<arr[l];m++){
    //                 // int sum;
    //                 sum = sum + i;
    //             }
    //             cout<<sum<<endl;
            

    //     }
    // }




    return 0;
}
