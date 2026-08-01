class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int j=1;j<n;j++){
            if(nums.at(i)!=nums.at(j)){
                nums.at(i+1)=nums.at(j);
                i++;
            }
        }
        return (i+1);
        
    }
};