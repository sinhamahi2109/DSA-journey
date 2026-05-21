#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverse(int x) {
        int rev=0;
        while(x!=0){
        int n=x%10;
        if(rev>INT_MAX/10||rev==INT_MAX/10 && n>7){
            return 0;
        }
        if(rev<INT_MIN/10||rev==INT_MIN/10 && n<-8){
            return 0;
        }
        rev=(rev*10)+n;
        x=x/10;
    
    
        } 
        return rev;
     }
int main(){
    int n;
    cin>>n;
    int num=reverse(n);
    cout<<num;
    return 0;
}


// int reverse(int n){
//     int rev=0;
//     while(n!=0){
//     int rem=n%10;
//     rev=(rev*10)+rem;
//     if(rev>INT_MAX/10||rev==INT_MAX/10&&n>7)return 0;
//     if(rev<INT_MIN/10||rev==INT_MIN/10&&n<-8)return 0;
//     n=n/10;

// }
// return rev;
// }