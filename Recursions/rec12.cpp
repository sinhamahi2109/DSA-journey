#include<iostream>
using namespace std;
string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&& (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') ){
                swap(s[i],s[j]);

            }
            i++;
            j--;
        }
        return s;
    }
int main(){
    string s;
    cin>>s;
    string newString= reverseVowels(s);
    cout<<newString;
    return 0;
}