#include<iostream>
using namespace std;
int countDigit(int n){
        int count=0;
        while(n>=0&&n<=5000){
            int last =n%10;
            n=n/10;
            count++;

        }
        return count;

    }
int main(){
    int n;
    cin>>n;
    int countt= countDigit(n);
    cout<<countt;
    return 0;
}