#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;




int main(){
    string str;
    cin>>str;
    int i=0;
    while(i<str.length()){
        
        if(isupper(str[i]))
            {
                cout<<str[i];
                i++;
            }
            if(islower(str[i])){
                cout<<str[i];
                i++;
            }
            cout<<endl;
        
        // if()
        
    }
    return 0;
}

