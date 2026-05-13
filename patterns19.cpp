#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            cout<<"*";
        }

        for(int k=0;k<2*i;k++){
            cout<<" ";
        }

        for(int l=5;l>i;l--){
            cout<<"*";

        }
        cout<<endl;
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        for(int j=0;j<10-(2*(i+1));j++){
            cout<<" ";
        }
        for(int l=0;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}