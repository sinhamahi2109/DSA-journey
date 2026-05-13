#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;

        }
        for(int k=0;k<(2*4)-(2*(i+1));k++){
            cout<<" ";
        }
        for(int l=i;l>=0;l--){
            cout<<l+1;
        }
        cout<<endl;
    }
    return 0;
}