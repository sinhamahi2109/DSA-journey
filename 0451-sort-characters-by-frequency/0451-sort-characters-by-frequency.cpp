class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        string ans="";
        map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        vector<pair<int,char>>v;
        for(auto it:mpp){
            v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());
        for(auto it:v){
            for(int i=0;i<it.first;i++){
                ans+=it.second;

            }
        }
        return ans;
    }
};