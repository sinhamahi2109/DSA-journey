#include<iostream>
using namespace std;
int getGcd(int n, int m){
    int count1=0;
    int gcd=1;
    int mini=min(n,m);
    
    for(int i=1;i<=mini;i++){
        if(n%i==0&&m%i==0){
            count1++;
            gcd=i;
        }
    }
    return gcd;

}
int main(){
    int n,m ;
    cin>>n;
    cin>>m;
    cout<<getGcd(n,m);

    return 0;
}