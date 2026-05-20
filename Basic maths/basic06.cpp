#include<iostream>
#include<list>
using namespace std;
void printDivisors(int n){
    list<int> l;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            l.push_back(i);

        }
        
    }
    l.sort();
    for(auto x : l){
    cout << x << " ";
}
}
int main(){
    int n;
    cin>>n;
    printDivisors(n);
    return 0;
}