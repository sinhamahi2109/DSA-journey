class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> a;
        for(int i=1;i<=2000;i++){
            if(find(arr.begin(),arr.end(),i)==arr.end()) a.push_back(i);
        }
        return a[k-1];
        
    }
};