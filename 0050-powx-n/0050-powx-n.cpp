#include<cmath>
class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long pow=n;
        if(pow<0)pow=-1*pow;
        if (pow==0)return 1;
        while(pow){
            if(pow%2==0){
                x=x*x;
                pow=pow/2;

            }
            if(pow%2==1){
                ans=ans*x;
                pow=pow-1;
            }
        }
        if(n<0)ans=double(1.0)/double(ans);
        return ans;

    }
};