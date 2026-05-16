#include<iostream>
using namespace std;

int main(){
    char ch='A';
    for(int i=0;i<5;i++){
        for(int j=i;j>=0;j--){
            cout<<char(ch+4-j);

        }
        cout<<endl;
    }
    return 0;
}