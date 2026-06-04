#include<iostream>
using namespace std;
void selection(int arr[],int n){
    
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if (arr[j]<arr[mini]){
                mini=j;
            }
            
        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;


    }
    for(int i=0;i<n;i++){

        cout<< arr[i];
    }
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    selection(arr,5);
    return 0;
}