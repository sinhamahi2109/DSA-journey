class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int sum=0;
        int count=0;mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int remove=sum-k;
            count+=mpp[remove];
            mpp[sum]+=1;
        }
        return count;
    }
};