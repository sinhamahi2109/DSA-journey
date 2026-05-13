#include<iostream>
using namespace std;

int main(){
    char ch='A';
    for(int i=0;i<5;i++){
        for ( int j=0; j<5-i; j++){
            cout<<char(ch+j);
            
            
        }
        cout<<endl;
}
    return 0;
}