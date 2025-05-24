class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;

        int left = 0; int right = x,ans = 0;
        
        while(left <= right){


            long long mid = left + (right-left)/2;
            long long sq = mid * mid;

            if ( sq == x) return  int(mid);
             else if(sq<x){
                
                ans = int(mid);
            left = int(mid)+1;} 

            else{

                right = int(mid) -1;
            }
        }
        return ans;
        
    }


};
