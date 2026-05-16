#include<iostream>
using namespace std;
int  factorial(int n){
    if(n==0||n==1)return 1;
    int fact=0;
    
    fact=n*factorial(n-1);
    return fact;
}
int main(){
    int n;
    cin>>n;
    
    int factt=factorial(n);
    cout<<factt;
    return 0;
}