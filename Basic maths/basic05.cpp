#include<iostream>
using namespace std;
bool checkArmstrong(int x){
    int dup=x;
    int arm=0;
    while(x>0){
        int digit=x%10;
        arm=arm+(digit*digit*digit);
        x=x/10;
    }
    if(arm==dup)return true;
    else return false;
}

int main(){
    int c;
    cin>>c;
    cout<<checkArmstrong(c);
    return 0;
}