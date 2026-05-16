#include<iostream>
using namespace std;
int  summ(int n){
    if(n==0)return 0;
    int sum=0;
    
    sum=n+summ(n-1);
    return sum;
}
int main(){
    int n;
    cin>>n;
    
    int add=summ(n);
    cout<<add;

    return 0;
}