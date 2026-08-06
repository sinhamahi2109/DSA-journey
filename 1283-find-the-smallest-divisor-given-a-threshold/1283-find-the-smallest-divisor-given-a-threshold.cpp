class Solution {
public:
    bool divide(vector<int>& nums,int divisor, int threshold){
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            double s=double(nums[i])/double(divisor);
            sum+=ceil(s);
        }
        // int mini=min(mini,sum);
        if(sum<=threshold)return true;
        else return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(nums.size()>threshold)return-1;
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(divide(nums,mid,threshold)==false)low=mid+1;
            else high=mid-1;

        }
        return low;
    }
};