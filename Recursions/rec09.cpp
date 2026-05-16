#include<iostream>
using namespace std;
bool rev(int i, string &s){
    if(i>=s.size()/2)return true;
    if(s[i]!=s[s.size()-i-1])return false;
    return rev(i+1,s);

}
int main(){
    string s;
    cin>>s;
    cout<<rev(0,s);
    return 0;
}