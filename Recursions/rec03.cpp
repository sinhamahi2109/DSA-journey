#include<iostream>
using namespace std;
void printNum(int n,int m){
    if(n<m)return;
    cout<<n<<" " ;
    n--;
    printNum(n,m);

}
int main(){
    int num;
    cin>>num;
    printNum(num,1);
    return 0;
}