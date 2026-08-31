class Solution {
public:
        long long MOD = 1e9 + 7;
        long long power(long long x, long long n) {
            long long ans=1.0;
            long long pow=n;
            if (pow==0)return 1;
            while(pow>0){
            if(pow%2==0){
                x=(x*x)%MOD;
                pow=pow/2;
            }
            if(pow%2!=0){
                ans=(ans*x)%MOD;
                pow=pow-1;
            } 

            }
            return ans;           
        
    }
    int countGoodNumbers(long long n){
        long long even=(n+1)/2;
        long long odd=n/2;
        long long pow1=power(5,even);
        long long pow2=power(4,odd);
        long long ans=pow1*pow2;
    
        return ans%MOD;

    }
    
};