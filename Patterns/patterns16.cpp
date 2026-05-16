#include<iostream>
using namespace std;

int main(){
    char ch='A';
    for(int i=0;i<5;i++){
        for ( int j=0; j<=i; j++){
            cout<<char(ch+i);
            
            
        }
        cout<<endl;
}
    return 0;
}