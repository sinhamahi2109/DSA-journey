#include<iostream>
using namespace std;

void printNum(int n,int m){
    if(n>m)return;
    cout<<n<<endl;
    n++;
    printNum(n,m);

}
int main(){
    int num;
    cin>>num;
    printNum(1,num);
    return 0;
}