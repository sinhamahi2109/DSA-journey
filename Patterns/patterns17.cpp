#include<iostream>
using namespace std;

int main(){
    char ch='A';
    for(int i=0;i<4;i++){
        for(int j=4;j>i;j--){
            cout<<" "; 
        }
        for(int j=0;j<=i;j++ ){
            cout<<char(ch+j);
        }
        for(int k=i;k>0;k--){
            cout<<char(k+ch-1);
        }


        cout<<endl;

    }
    return 0;
}