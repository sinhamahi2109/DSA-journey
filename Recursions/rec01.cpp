#include<iostream>
using namespace std;
int n=0;
void nameprint(string name){
    if(n==5) {return;}
    cout<< name<<" "<<n+1<<endl;
    n++;
    nameprint(name);

}
int main(){
    string name;
    cin>>name;
    nameprint(name);
    return 0;
}