class Solution {
public:

     bool fn(vector<int>& weights, int days,int capacity){
            int cnt=1,tot=0;
            for(int i=0;i<weights.size();i++){

                if(tot+weights[i]<=capacity){
                    tot+=weights[i];
                }
                else{
                    cnt++;
                    tot=weights[i];
                }
            }
            if(cnt<=days)return true;
            else return false;
     }
    int shipWithinDays(vector<int>& weights, int days) {
      
        int sum=accumulate(weights.begin(), weights.end(), 0);
        int low=*max_element(weights.begin(),weights.end());
        int high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            if(fn(weights,days,mid)==true)high=mid-1;
            else low=mid+1;

        }
        return low;
    }
};