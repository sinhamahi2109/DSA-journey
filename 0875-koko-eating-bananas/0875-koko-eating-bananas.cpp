class Solution {
public:
    long long  fn(vector<int>&piles, int hourly){
        long long tothr=0;
        for(int i=0;i<piles.size();i++){
        double a=double(piles[i])/double(hourly);
            tothr+=ceil(a);
            // tothr += (piles[i] + hourly - 1) / hourly;
        }
        return tothr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int n=piles.size();
        int low=1;
        int high=maxi;
        
        while(low<=high){
            int mid=(low+high)/2;
            long long total=fn(piles,mid);
            if(total<=h){
                high=mid-1;

            }
            else low=mid+1;

        }
        return low;
    }
};