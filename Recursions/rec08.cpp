#include<iostream>
using namespace std;
void reverse(int arr[], int i ,int n){
    
    // int i=0;
    // int l=n;
    if(i>=n/2)return;
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    // i++;
   

    reverse(arr,i+1,n);
  
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}