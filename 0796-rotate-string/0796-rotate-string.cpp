class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())return false;
        string concat=s+s;
        int index=concat.find(goal);
        if(index==-1)return false;
        else return true;
    }
};