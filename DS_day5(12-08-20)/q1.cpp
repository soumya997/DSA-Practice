#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;




int main(){
    string str = "acb";
    int n = str.length();

    for(int i=0;i<n-1;i++){
        // cout<<(int)str[i]<<" ";        
        int diff;
        // while(str[i] != '\0'){
        cout<<str[i];
        diff = (int)str[i+1] - (int)str[i];
        cout<<diff;     
    }
    cout<<str[str.length()-1];



    
    return 0;
}

