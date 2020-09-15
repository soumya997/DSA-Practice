#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
    int r,c;
    cin>>r;
    c=r;
    int arr[r][c];
    int copy1[r][c]={0};
    int copy2[r][c]={0};

    for(int x=0;x<r;x++){
        for(int y=0;y<c;y++){
            cin>>arr[x][y];
        }
    }

    // for(int x=0;x<r;x++){
    //     for(int y=0;y<c;y++){
    //         copy1[x][y] = arr[y][x];
            
    //     }
    // }

    // for(int x=0;x<r;x++){
    //     for(int y=0;y<c;y++){
    //         copy2[x][y] = copy1[x][y];
            
    //     }
    // }
    // swap(copy1[0],copy1[1]);
    // TRY 1
    for(int j=c-1;j>=0;j--){
        for(int i=0;i<r;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    
    // for(int x=0;x<r;x++){
    //     for(int y=0;y<c;y++){
    //         cout<<copy2[x][y]<<" ";
            
    //     }
    //     cout<<endl;
    // }
    

    return 0;
}

