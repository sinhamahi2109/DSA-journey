class Solution {
public:
int cal(vector<int>& nums, int k, int m){
    int number=1;
    int arr=0;
    for(int i=0;i<nums.size();i++){
        if(arr+nums[i]<=m){
            arr+=nums[i];
        }
        else{
            number++;
            arr=nums[i];

        }
    }
    return number;
}
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            if(cal(nums,k,mid)<=k)high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};