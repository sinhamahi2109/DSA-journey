#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            int top =i;
            int left=j;
            int bottom=(2*4-2)-i;
            int right=(2*4-2)-j;
            cout<<4-(min(min(top,bottom),min(left,right)));
        }
        cout<<endl;

    }

    return 0;
}