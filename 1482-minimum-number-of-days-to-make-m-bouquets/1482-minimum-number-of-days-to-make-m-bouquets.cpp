class Solution {
public:
bool possible(vector<int>&bloomDay,int day, int m,int k){
    int cnt=0;
    int number=0;
    for(int i=0;i<bloomDay.size();i++){
    if(bloomDay[i]<=day){
        cnt++;
    }
    else{
        number+=cnt/k;
        cnt=0;
    }
    }
    number+=cnt/k;
    if(number>=m)return true;
    else return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=m*1LL*k*1LL;
        if(bloomDay.size()<val)return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)==false) low=mid+1;
            else high=mid-1;

        }
        return low;
    }
};