class Solution {
public:
bool fn(vector<int>& arr, int k,int mid){
 
        if(arr[mid]-(mid+1)<k)return true;
        else return false;
}
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            
                if(fn(arr,k,mid)==true)low=mid+1;
                else high=mid-1;

            
        } 
        return low+k;  
    }
};