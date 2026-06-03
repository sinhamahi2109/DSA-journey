#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> countFrequencies(vector<int>& nums) {
        // Your code goes here
        map<int,int>mpp;
        for(int i =0;i>nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<vector<int>>result;
        for(auto it:mpp){
           result.push_back(vector<int>({it.first,it.second}));
        }
        return result;
    }
int main(){
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    countFrequencies(nums);


    return 0;
}