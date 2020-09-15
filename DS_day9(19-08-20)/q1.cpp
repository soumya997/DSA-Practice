#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int N,M,K,S;
    cin>>N>>M>>K>>S;

    char str[N][M];
    for(int n=0;n<N;n++){
        for(int m=0;m<M;m++){
            cin>>str[n][m];
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(str[i][j]=='#'){
                i++;
            }
            if(str[i][j]=='.'){
                S = S -3;
            }
            if(str[i][j]=='*'){
                S = S +4;
            }
            if(i==N && j==M){
                cout<<"YES";
                cout<<S;
                break;
            }
            if(S<K){
                cout<<"NO";
                break;
            }
        }
    }
}
