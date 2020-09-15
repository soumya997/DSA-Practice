#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;


int main(){
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        long long n,k,x;
        x=0;
        cin>>n>>k;

        while(pow(x,k)<=n){
            x++;
        }    
        cout<<x-1;
        return 0;
    }

    
}

