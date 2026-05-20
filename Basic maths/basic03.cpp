#include<iostream>
using namespace std;
bool isPalindrome(int x){
    int dup=x;
    int rev=0;
    while(x!=0){
        int last=x%10;
        rev=(rev*10)+last;
        x=x/10;
    }
    if (rev==dup)return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    cout<<isPalindrome(n);
    return 0;
}