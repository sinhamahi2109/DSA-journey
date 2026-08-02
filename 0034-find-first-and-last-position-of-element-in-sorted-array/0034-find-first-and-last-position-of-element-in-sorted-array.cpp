class Solution {
public:
int firstOcc(vector<int>& nums, int target){
    int n=nums.size();
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(nums[mid]<target)low=mid+1;
        else high=mid-1;
    }
    return first;
}
int lastOcc(vector<int>& nums, int target){
    int n=nums.size();
    int low=0;
    int high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(nums[mid]<target)low=mid+1;
        else high=mid-1;
    }
    return last;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int f=firstOcc(nums,target);
        int l=lastOcc(nums,target);
        vector<int>a;
        a.push_back(f);
        a.push_back(l);
        return a; 
    }
};