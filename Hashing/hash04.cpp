#include<iostream>
#include<bits/stdc++.h>
// #include map;
using namespace std;

int main(){
    int n;
    cout<<"enter no of elements in array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int, int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }


    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num];

    }

    
    return 0;
}