class Solution {
public:
    int mySqrt(int x) {
        int low=0,high=x;
        int res=0;

        while(low<=high){
            int m=(low+high)/2;
            if((long long)m*m > x){
                high=m-1;

            } else if((long long) m*m<x){
                low=m+1;
                res=m;
            } else{
                return m;
            }
        }
        return res;
    }
};